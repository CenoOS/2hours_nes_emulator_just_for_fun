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
#include <iostream>
void App::Render() {
   

    // get CHR rom
    std::vector<mos6502::i8> rom = this->rom->getPRGROM()[0];
    
    // process CHR mata data
    std::vector<ppu::Tile> tiles;
    for(int i = 0; i < (int)rom.size()-15; i+=16){
        
        ppu::Tile tile;
        
        for(int j = i; j<i+15; j+=2){
            mos6502::i8 result[8];
            mos6502::i8 *result_arr = ppu->addTileInt8(rom[j], rom[8+j], result);// first is low bits, second is high bits
            for(int k = 0; k<7; k++){
                int floor_ = floor((j-i)/2);
                tile.data[floor_][k] = result_arr[k];
            }
        }

        tiles.push_back(tile);
    }

    SDL_RenderClear(Renderer);
   

    // GAME RENDER AREA
    for(int i = 0; i< WindowWidth/4; i++){
        for(int j = 0; j<WindowHeight/4; j++){
            SDL_SetRenderDrawColor(Renderer, i, j, 0, 255);
            SDL_Rect rect{
                i*2,
                j*2,
                2,
                2
            };
            SDL_RenderFillRect(Renderer,&rect);
            //SDL_RenderDrawPoint(Renderer, i, j);
        }
    }


    // PPU RENDER AREA
    int J_INDEX = 0;
    for(int t = 0; t < tiles.size(); t++){
        for(int i = 0; i<8; i++){
            for(int j = 0; j<8; j++){
                if(tiles[t].data[i][j]==0){
                    SDL_SetRenderDrawColor(Renderer,0,0,0,255);
                }
                if(tiles[t].data[i][j]==1){
                    SDL_SetRenderDrawColor(Renderer,100,0,0,255);
                }
                if(tiles[t].data[i][j]==2){
                    SDL_SetRenderDrawColor(Renderer,0,100,0,255);
                }
                if(tiles[t].data[i][j]==3){
                    SDL_SetRenderDrawColor(Renderer,0,0,100,255);
                }

                // SDL_SetRenderDrawColor(Renderer,tiles[t].data[i][j]*50, tiles[t].data[i][j]*50, tiles[t].data[i][j]*50, 255);
                SDL_Rect rect{
                    WindowWidth/2 + (t%32)*8*2 + i*2,
                    (8*J_INDEX)*2 + j*2,
                    2,
                    2
                };
                SDL_RenderFillRect(Renderer,&rect);
                // SDL_RenderDrawPoint(Renderer, WindowWidth/2 + (t%32)*8 + i,8*J_INDEX+j);
            }
        }
        
        if(t % 32 == 0){
            J_INDEX++;
        }

    }


    // APU RENDER AREA
    for(int i = 0; i< WindowWidth/4; i++){
        for(int j = 0; j<WindowHeight/4; j++){
            SDL_SetRenderDrawColor(Renderer, 0, 255, 0, 255);
            SDL_Rect rect{
                i*2,
                WindowHeight/2 + j*2,
                2,
                2
            };
            SDL_RenderFillRect(Renderer,&rect);
            //SDL_RenderDrawPoint(Renderer, i, WindowHeight/2 + j);
        }
    }

    // CPU RENDER AREA
    for(int i = 0; i< WindowWidth/4; i++){
        for(int j = 0; j<WindowHeight/4; j++){
            SDL_SetRenderDrawColor(Renderer, 0, 0, 255, 255);
            SDL_Rect rect{
                WindowWidth/2 + i*2,
                WindowHeight/2 + j*2,
                2,
                2
            };
            SDL_RenderFillRect(Renderer,&rect);
            // SDL_RenderDrawPoint(Renderer, WindowWidth/2 + i, WindowHeight/2 + j);
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

