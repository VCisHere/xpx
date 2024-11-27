#include <codecvt>
#include <iostream>

#include "render_window.h"
#include "xpx_application.h"

int main(int argc, char** args)
{
    XPX::XApplicatioon App;

    XPX::XRenderWindow* window = App.CreateWindow(800, 600);

    App.Run();

    App.DestroyWindow(window);

    return 0;
}
