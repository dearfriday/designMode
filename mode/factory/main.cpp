#include <iostream>

#include <factory.hpp>


int main() {

    auto daz = factory::car::create(factory::dazhong);
    std::cout << "Hello, World!    " <<  daz->get_name() << std::endl;
    delete  daz;



    return 0;
}