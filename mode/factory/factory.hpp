//
// Created by nova on 20/12/2018.
//

#pragma once

#include <iostream>


//工厂模式
namespace factory {


    enum car_type {
        no = 0,
        dazhong,
        baoma
    };


    class dazhong;
    class baoma;


    class car {
    public:
        car();
        static car* create(car_type type);
        std::string get_name();
        void set_name(std::string name);
    private:
        std::string name;

    };


    class dazhong : public car {
    public:
        dazhong();
    };


    class baoma : public car {
    public:
        baoma();
    };


}