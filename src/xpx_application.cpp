#include "xpx_application.h"

#include "render_device_sdl.h"
#include "render_window_sdl.h"

namespace XPX
{

XApplicatioon::XApplicatioon()
{
    // todo: loader
    m_renderDevice = std::make_unique<XRenderDeviceSDL>();
    if (!m_renderDevice->Init())
    {
        return;
    }
}

XApplicatioon::~XApplicatioon()
{
    m_renderDevice->Quit();
}

void XApplicatioon::Run()
{
    m_renderDevice->Run();
}

XRenderWindow* XApplicatioon::CreateWindow(int32_t width, int32_t height)
{
    // todo: loader
    return new XRenderWindowSDL(width, height);
}

void XApplicatioon::DestroyWindow(XRenderWindow* window)
{
    delete window;
}

} // namespace XPX
