//
// Created by nova on 21/12/2018.
//

#pragma once

#include <iostream>
#include <vector>

namespace bridge {

    class plugin {
    public:

        virtual bool start() = 0;
    };


    class net_plugin : public plugin {
    public:

        bool start() {
            std::cout << "start net plugin" << std::endl;
            return true;
        }
    };

    class file_plugin : public plugin{
    public:
        bool start(){
            std::cout << "start file plugin" << std::endl;
            return  true;
        }
    };


    class app {
    public:

        bool luanch(plugin &p) {
            std::cout << "luanch plugin :" << std::endl;
            p.start();
            return true;
        }


    };


}
