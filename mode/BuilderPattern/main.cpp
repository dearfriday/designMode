//
// Created by nova on 20/12/2018.
//

#include <builder.hpp>
#include <iostream>
using namespace builderPattern;

int main() {

    builderPattern::packet pp;
    pp.add_item(new qiancha_v1());
    pp.add_item(new chejia_v2());
    pp.add_item(new chetai_v1());

    std::cout << "cost : " << pp.get_cost() << std::endl;
    std::cout << "name : " << pp.get_all_name() << std::endl;

    return 0;
}