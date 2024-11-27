#ifndef _X_RENDER_DEVICE_H_
#define _X_RENDER_DEVICE_H_

#include <string>

namespace XPX
{

class XRenderDevice
{
public:
    XRenderDevice();
    virtual ~XRenderDevice();

    virtual bool Init() = 0;
    virtual void Quit() = 0;

    virtual void Run() = 0;
};

} // namespace XPX

#endif // _X_RENDER_DEVICE_H_
