//
// Created by itsl on 18-4-9.
//

#ifndef LIGHTROV_CLIENT_LINUX_WINDOW_INTERFACE_H
#define LIGHTROV_CLIENT_LINUX_WINDOW_INTERFACE_H

#include <gtkmm.h>
#include <string>

namespace ltrov
{
class Window: public Gtk::Window
{
protected:
    virtual void on_realize() {
        Gtk::Window::on_realize();
        this->handle();
    }

public:

    /*×
     * 该函数在窗口初始化时被调用
     * 应用于处理初始化的任务
     * @return void
     */
    virtual void handle() = 0;

};
}   // namespace

#endif //LIGHTROV_CLIENT_LINUX_WINDOW_INTERFACE_H
