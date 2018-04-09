//
// Created by itsl on 18-4-9.
//

#ifndef LIGHTROV_CLIENT_LINUX_MAIN_WINDOW_H
#define LIGHTROV_CLIENT_LINUX_MAIN_WINDOW_H

#include "window_interface.h"

namespace ltrov
{
class MainWindow: public Window
{
public:
    MainWindow();
    void handle();
};
}

#endif //LIGHTROV_CLIENT_LINUX_MAIN_WINDOW_H
