#ifndef _X_RENDER_DEVICE_SDL_H_
#define _X_RENDER_DEVICE_SDL_H_

#include "render_device.h"

#include <thread>

namespace XPX
{

class XRenderDeviceSDL : public XRenderDevice
{
public:
    XRenderDeviceSDL();
    virtual ~XRenderDeviceSDL();

    virtual bool Init() override;
    virtual void Quit() override;

    virtual void Run() override;

private:
    std::thread m_thread;
};

} // namespace XPX

#endif // _X_RENDER_DEVICE_SDL_H_
