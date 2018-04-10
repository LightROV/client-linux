/**
 * 入口文件
 *
 * 程序的主逻辑在window中进行
 */

#include <fstream>
#include <iostream>
#include <string>

#include <gtkmm.h>
#include "../includes/rapidjson/ostreamwrapper.h"
#include "../includes/rapidjson/istreamwrapper.h"
#include "../includes/rapidjson/document.h"

#include "../windows/main_window.h"

using std::string;
using ltrov::MainWindow;
using rapidjson::IStreamWrapper;
using rapidjson::OStreamWrapper;
using rapidjson::Document;

/**
 * 默认配置
 */
string      rov_ip      = "192.168.16.101";
std::size_t rov_port    = 2333;
std::size_t local_port  = 9808;

int main(int argc, char* argv[]) {
    std::ifstream ifs("config/config.json");
    IStreamWrapper isw(ifs);
    Document configJSON;
    configJSON.ParseStream(isw);
    if (configJSON.IsObject()) {
        if (configJSON["rov_ip"].IsString()) {
            rov_ip = configJSON["rov_ip"].GetString();
        }
        if (configJSON["rov_port"].IsInt()) {
            rov_port = (std::size_t) configJSON["rov_port"].GetInt();
        }
        if (configJSON["local_port"].IsInt()) {
            local_port = (std::size_t) configJSON["local_port"].GetInt();
        }
    }
    auto app = Gtk::Application::create(
            argc,
            argv,
            "cn.lightrov.linux-client"
    );
    MainWindow mainWindow(rov_ip, rov_port, local_port);
    int ret = app->run(mainWindow);

    // TODO:保存配置
    std::ofstream ofs("config/config.json");
    OStreamWrapper osw(ofs);
    // ...

    return ret;
}