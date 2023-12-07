//
// Created by Jesse on 12/01/2023.
//

#include <SDL.h>
#include <iostream>

using namespace std;

constexpr int fps = 60;

int main(int argc, char* args []) {
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window = SDL_CreateWindow("Blank Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
    if (window == nullptr) {
        SDL_Log("Failed to create window: %s", SDL_GetError());
        return 1;
    }

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == nullptr) {
        SDL_Log("Failed to create renderer: %s", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    bool running = true;
    const Uint32 start = SDL_GetTicks();
    SDL_Event event;

    while (running) {

        // Close window with any input
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
                break;
            }
        }

        // -> Application lifecycle

        // Cornflower blue background... because why not?
        SDL_SetRenderDrawColor(renderer, 100, 149, 237, 1);

        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);

        // <- Application lifecycle

        if(1000/fps>SDL_GetTicks()-start)
        {
            SDL_Delay(1000/fps-(SDL_GetTicks() - start));
        }
    }


    // Kill the window and renderer
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
