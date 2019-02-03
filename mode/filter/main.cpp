//
// Created by nova on 03/02/2019.
//

#include <filter.hpp>


filter::data create_test_data(uint32_t length){
    filter::data ret;
    for(int i = 0; i < length; i++){
        ret.push_back(i);
    }
    return  ret;

}



int main(int argc, char *argv[])
{
    auto test_data = create_test_data(20);

    filter::filter_one one;
    filter::fileter_double doul;
    auto ret_one = one.filter_data(test_data);
    auto ret_double = doul.filter_data(test_data);
    return 0;
}