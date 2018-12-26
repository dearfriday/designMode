//
// Created by nova on 26/12/2018.
//



#include <bridge.hpp>

using namespace bridge;
int main(){

    net_plugin  net;
    file_plugin file;
    app         ap;

    ap.luanch(net);
    ap.luanch(file);

    return 0;
}