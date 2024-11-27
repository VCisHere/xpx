#ifndef _X_RENDER_WINDOW_SDL_H_
#define _X_RENDER_WINDOW_SDL_H_

#include "render_window.h"

#include "SDL.h"

namespace XPX
{

class XRenderWindowSDL : public XRenderWindow
{
public:
    XRenderWindowSDL(int32_t width, int32_t height);
    virtual ~XRenderWindowSDL();

private:
    SDL_Window* m_window;
};

} // namespace XPX

#endif // _X_RENDER_WINDOW_SDL_H_