#include "render_window_sdl.h"

#include "SDL.h"

#include <iostream>

namespace XPX
{

XRenderWindowSDL::XRenderWindowSDL(int32_t width, int32_t height) : m_window(nullptr)
{
    m_window = SDL_CreateWindow("", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);
    if (m_window == nullptr)
    {
        std::cout << "Error creating window: " << SDL_GetError() << std::endl;
        return;
    }
}

XRenderWindowSDL::~XRenderWindowSDL()
{
    if (m_window)
    {
        SDL_DestroyWindow(m_window);
    }
}

} // namespace XPX
