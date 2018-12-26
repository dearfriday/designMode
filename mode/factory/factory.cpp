//
// Created by nova on 20/12/2018.
//


#include "factory.hpp"


namespace factory{

    car* car::create(car_type type) {
        switch (type) {
            case no:
                return new car();
            case dazhong:
                return new class dazhong;
            case baoma:
                return new class baoma;
            default:
                return new car;
        }
    }

    std::string car::get_name() {
        return name;
    }

    car::car():name("no car") {

    }

    void car::set_name(std::string _name) {
        name = _name;
    }

    dazhong::dazhong() {
        set_name("dazhong");
    }

    baoma::baoma() {
        set_name("baoma");
    }
}