#ifndef _X_APPLICATION_H_
#define _X_APPLICATION_H_

#include <memory>

namespace XPX
{

class XRenderDevice;
class XRenderWindow;

class XApplicatioon
{
public:
    XApplicatioon();
    ~XApplicatioon();

    void Run();

    XRenderWindow* CreateWindow(int32_t width, int32_t height);
    void DestroyWindow(XRenderWindow* window);

private:
    std::unique_ptr<XRenderDevice> m_renderDevice;
};

} // namespace XPX

#endif // _X_APPLICATION_H_
