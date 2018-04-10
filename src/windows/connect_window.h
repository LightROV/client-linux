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
class ConnectWindow: public Gtk::Window
{
public:

    ConnectWindow(string& ip, size_t& r_port, size_t& l_port);

};
}   // namespace ltrov


#endif //LIGHTROV_CLIENT_LINUX_CONNECT_WINDOW_H
