#include "../include/App.h"
#include "../include/Log.h"


#include <vector>
#include <math.h>

App App::Instance;


App::App() {

}


void App::OnEvent(SDL_Event* Event) {

}

bool App::Init() {
    this->ppu = new ppu::PPU(); 
    this->rom = new rom::ROM();
    this->rom->loadNesFile("game_rom/donkykong.nes");



    if(SDL_Init(SDL_INIT_VIDEO) < 0) {
        Log("Unable to Init SDL: %s", SDL_GetError());
        return false;
                            
    }

    if(!SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1")) {
        Log("Unable to Init hinting: %s", SDL_GetError());
                    
    }

    if((Window = SDL_CreateWindow("NeroNES",
                    SDL_WINDOWPOS_UNDEFINED, 
                    SDL_WINDOWPOS_UNDEFINED,
                    WindowWidth, WindowHeight,
                    SDL_WINDOW_SHOWN)) == NULL) {
        Log("Unable to create SDL Window: %s", SDL_GetError());
        return false;
                            
    }

    PrimarySurface = SDL_GetWindowSurface(Window);

    if((Renderer = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED)) == NULL) {
        Log("Unable to create renderer");
        return false;                        
    }

    SDL_SetRenderDrawColor(Renderer, 0x00, 0x00, 0x00, 0xFF);

    return true;

}


void App::Loop() {

}

void App::Render() {
   

    // get CHR rom
    std::vector<mos6502::i8> rom = this->rom->getPRGROM()[0];
    
    // process CHR mata data
    std::vector<ppu::Tile> tiles;
    for(int i = 0; i < (int)rom.size()-15; i+=16){
        
        ppu::Tile tile;
        
        for(int j = i; j<i+15; j+=2){
            mos6502::i8 *result = ppu->addTileInt8(rom[j], rom[j+1]);// tile add
            for(int k = 0; k<7; k++){
                int floor_ = floor((j-i)/2);
                tile.data[floor_][k] = result[k];
            }
        }
        tiles.push_back(tile);
    }


    SDL_RenderClear(Renderer);
    
    for(int i = 0; i< WindowHeight/4; i++){
        for(int j = 0; j<WindowWidth/4; j++){
            SDL_SetRenderDrawColor(Renderer, (1>255?i%255:i), (j>=255?j%255:j), 0, 255);
            SDL_Rect rect{
                i*4,
                j*4,
                4,
                4
            };
            SDL_RenderFillRect(Renderer,&rect);
            // SDL_RenderDrawPoint(Renderer, i, j);
        }
    }

    SDL_RenderPresent(Renderer);

}

void App::Cleanup() {
    if(Renderer) {
        SDL_DestroyRenderer(Renderer);
        Renderer = NULL;                    
    }

    if(Window) {
        SDL_DestroyWindow(Window);
        Window = NULL;                    
    }
    SDL_Quit();
}


int App::Execute(int argc, char* argv[]) {
    if(!Init()) return 0;
        SDL_Event Event;
        while(Running) {
            while(SDL_PollEvent(&Event) != 0) {
                OnEvent(&Event);
                if(Event.type == SDL_QUIT) Running = false;                               
            }
            Loop();
            Render();
            // SDL_Delay(1); // Breath                           
        }
        Cleanup();
        return 1;
}


App* App::GetInstance() { return &App::Instance;  }

int App::GetWindowWidth()  { return WindowWidth;  }
int App::GetWindowHeight() { return WindowHeight;  }

