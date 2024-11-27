#include "render_device_sdl.h"

#include <iostream>

#include "SDL.h"

namespace XPX
{

XRenderDeviceSDL::XRenderDeviceSDL()
{
}

XRenderDeviceSDL::~XRenderDeviceSDL()
{
}

bool XRenderDeviceSDL::Init()
{
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
    {
        std::cout << "Error initializing SDL: " << SDL_GetError() << std::endl;
        return false;
    }

    return true;
}

void XRenderDeviceSDL::Quit()
{
    SDL_Quit();
}

void XRenderDeviceSDL::Run()
{
    SDL_Event event;
    bool run = true;
    while (run)
    {
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                run = false;
            }
        }
    }
}

} // namespace XPX
