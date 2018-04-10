//
// Created by itsl on 18-4-10.
//

#include "connect_window.h"

using namespace ltrov;

ConnectWindow::ConnectWindow(string &ip,
                             size_t &r_port,
                             size_t &l_port, Gtk::Window& parent_window):
    ip(ip), r_port(r_port), l_port(l_port), Gtk::Dialog("", parent_window) {
    this->loadWindow();
    this->set_modal(true);
    this->set_size_request(400, 200);
    this->set_title("Config Client");
    this->set_resizable(false);
}

void ConnectWindow::loadWindow() {
    // TODO: 窗口控件的添加与布局
    Gtk::Box* vbox = this->get_vbox();
    tv_ip.set_text(ip);
    std::stringstream ss;
    ss << r_port;
    tv_rport.set_text(r_port);
    label_ip.set_text("Remote:");
    label_port.set_text("Local:");
    label_ip.set_width_chars(10);
    label_port.set_width_chars(10);
    hbox_remote_config.set_halign(Gtk::Align::ALIGN_START);
    hbox_local_config.set_halign(Gtk::Align::ALIGN_START);
    hbox_remote_config.set_margin_top(20);
    hbox_remote_config.set_margin_bottom(30);
    hbox_local_config.set_margin_bottom(30);
    hbox_remote_config.add(label_ip);
    hbox_remote_config.add(tv_ip);
    hbox_remote_config.add(tv_rport);
    hbox_local_config.add(label_port);
    hbox_local_config.add(tv_lport);
    btn_sub.set_label("Connect");
    hbox_button.add(btn_sub);
    vbox->add(hbox_remote_config);
    vbox->add(hbox_local_config);
    vbox->add(hbox_button);
    this->show_all();
}
