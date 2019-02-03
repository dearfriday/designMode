//
// Created by nova on 03/02/2019.
//

#pragma once

#include <vector>

namespace filter {


    typedef std::vector<int> data;


    class filter_one {
    public:
//        filter_one() = default;

        data filter_data(const data &d) {
            data ret;
            for(const auto &itr : d){
                if(itr % 2 == 0){
                    ret.push_back(itr);
                }
            }
            return ret;
        }
    };


    class fileter_double {
    public:
        data filter_data(const data &d){
            data ret;
            for(const auto &itr : d){
                if(itr % 2 == 1){
                    ret.push_back(itr);
                }
            }
            return ret;
        }
    };


}
