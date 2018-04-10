//
// Created by itsl on 18-4-9.
//

#include "main_window.h"

using namespace ltrov;

void MainWindow::handle() {

}

MainWindow::MainWindow(string &ip,
                       size_t &r_port,
                       size_t &l_port)
    :rov_ip(ip), rov_port(r_port), local_port(l_port) {
    this->set_title("LightROV Client");
    this->set_default_size(800, 600);
    this->set_size_request(800,600);
    this->set_resizable(false);
}
