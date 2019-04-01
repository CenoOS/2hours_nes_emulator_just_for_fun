#ifndef __APP_H__
#define __APP_H__

#include <SDL.h>
#include "../include/ROM.h"
#include "../include/PPU.h"


class App{
    
    private:
        
        static App Instance;
        bool Running = true;

        SDL_Window* Window = NULL;
        SDL_Renderer* Renderer = NULL;
        SDL_Surface* PrimarySurface = NULL;

        static const int WindowWidth = 256*4;
        static const int WindowHeight = 240*4;

        rom::ROM *rom = NULL;
        ppu::PPU *ppu = NULL;
        
    private:
        
        App();

        // Capture SDL Events
        void OnEvent(SDL_Event* Event);
       
        // Initialize our SDL game / app
        bool Init();
       
        // Logic loop
        void Loop();
       
        // Render loop (draw)
        void Render();
       
        // Free up resources
        void Cleanup();
       



    public:
        
        int Execute(int argc, char* argv[]);

    public:
        
        static App* GetInstance();

        static int GetWindowWidth();
        static int GetWindowHeight();

};


#endif // !__APP_H__

