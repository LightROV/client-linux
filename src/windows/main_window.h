//
// Created by itsl on 18-4-9.
//

#ifndef LIGHTROV_CLIENT_LINUX_MAIN_WINDOW_H
#define LIGHTROV_CLIENT_LINUX_MAIN_WINDOW_H

#include <iostream>
#include <string>
#include "window_interface.h"
#include "connect_window.h"

using std::string;
using std::size_t;

namespace ltrov
{
class MainWindow: public Window
{
protected:
    string& rov_ip;
    size_t& rov_port;
    size_t& local_port;
    ConnectWindow* conn_window;

public:
    /**
     * 绑定相关数据
     *
     * @param ip
     * @param r_port
     * @param l_port
     */
    MainWindow(string& ip, size_t& r_port, size_t& l_port);

    /**
     * 实现handle方法将在窗口初始化时调用
     * @return void
     */
    void handle();
};
}   // namespace ltrov

#endif //LIGHTROV_CLIENT_LINUX_MAIN_WINDOW_H
