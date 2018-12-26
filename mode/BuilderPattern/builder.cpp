//
// Created by nova on 20/12/2018.
//

#include "builder.hpp"


namespace builderPattern {


    uint32_t qiancha_v1::price() {
        return 100;
    }

    std::string qiancha_v1::item_name() {
        return std::string("qian cha v1");
    }

    uint32_t qiancha_v2::price() {
        return 150;
    }

    std::string qiancha_v2::item_name() {
        return std::string("qian cha v2");
    }

    uint32_t chejia_v1::price() {
        return 500;
    }

    std::string chejia_v1::item_name() {
        return std::string("che jia v1");
    }

    uint32_t chejia_v2::price() {
        return 600;
    }

    std::string chejia_v2::item_name() {
        return std::string("che jia v2");
    }

    std::string chetai_v1::item_name() {
        return std::string("chetai v1");
    }

    uint32_t chetai_v1::price() {
        return 60;
    }

    uint32_t chetai_v2::price() {
        return 75;
    }

    std::string chetai_v2::item_name() {
        return std::string("chetai v2");
    }

    void packet::add_item(item *it) {
        items.push_back(std::shared_ptr<item>(it));
    }

    uint32_t packet::get_cost() {
        uint32_t all = 0;
        for(auto &itr : items){
            all += itr->price();
        }
        return all;
    }

    std::string packet::get_all_name() {
        std::string ret;
        for(auto &n : items){
            ret += " " + n->item_name();
        }
        return ret;
    }

    packet::packet() {

    }
}

