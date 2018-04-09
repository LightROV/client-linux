/**
 * 入口文件
 *
 * 程序的主逻辑在window中进行
 */

#include <gtkmm.h>

#include "../windows/main_window.h"

using ltrov::MainWindow;

int main(int argc, char* argv[]) {
    auto app = Gtk::Application::create(
            argc,
            argv,
            "LightROV-Client(test)"
    );
    MainWindow mainWindow;
    mainWindow.set_default_size(400, 300);
    return app->run(mainWindow);
}