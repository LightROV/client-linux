//
// Created by itsl on 18-4-10.
//

#ifndef LIGHTROV_CLIENT_LINUX_CONNECT_WINDOW_H
#define LIGHTROV_CLIENT_LINUX_CONNECT_WINDOW_H

#include <string>

#include <gtkmm.h>

using std::string;
using std::size_t;

namespace ltrov
{
class ConnectWindow: public Gtk::Dialog
{
protected:
    string& ip;
    size_t& r_port;
    size_t& l_port;
    Gtk::HBox hbox_remote_config;
    Gtk::HBox hbox_local_config;
    Gtk::HBox hbox_button;
    Gtk::Label label_ip;
    Gtk::Label label_port;
    Gtk::Entry tv_ip;
    Gtk::Entry tv_rport;
    Gtk::Entry tv_lport;
    Gtk::Button btn_sub;

    /**
     * 初始化窗口控件
     */
    void loadWindow();

public:
    ConnectWindow(string& ip, size_t& r_port, size_t& l_port, Gtk::Window& parent_window);

};
}   // namespace ltrov


#endif //LIGHTROV_CLIENT_LINUX_CONNECT_WINDOW_H
