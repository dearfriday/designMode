//
// Created by nova on 20/12/2018.
//

#pragma once


#include <cstdint>
#include <string>
#include <vector>

namespace builderPattern {


    class item {
    public:
        virtual //单价
        uint32_t price() { return 0; };

        virtual //名称
        std::string item_name() { return "error"; };

    };


    //前叉1
    class qiancha_v1 : public item {
    public:

        uint32_t price() override;

        std::string item_name() override;
    };

    //前叉2
    class qiancha_v2 : public item {
    public:
        uint32_t price() override;

        std::string item_name() override;
    };

    //车架1
    class chejia_v1 : public item {
    public:
        uint32_t price();

        std::string item_name();
    };

    //chejia v2
    class chejia_v2 : public item {
    public:
        uint32_t price();

        std::string item_name();
    };


    //车胎
    class chetai_v1 : public item {
    public:
        uint32_t price();

        std::string item_name();
    };

    class chetai_v2 : public item {
    public:
        uint32_t price();

        std::string item_name();
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    class packet {
    public:
        packet();

        void add_item(item *it);

        uint32_t get_cost();

        std::string get_all_name();

    private:
        std::vector< std::shared_ptr<item> > items;
    };

}
