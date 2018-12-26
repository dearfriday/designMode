//
// Created by nova on 21/12/2018.
//

#pragma once

#include <iostream>


namespace prototype{


    class base{
    public:
        base(){

        }

        base(const base & b){
            a = b.a;
        }

        virtual void pt() { std::cout << a << "base\n";}
        void set_a(int _a ){
            a = _a;
        }

    protected:
        int a = 0;
    };

    class quto : public  base{
    public:
        quto(){}

        quto(const quto &q){
            a = q.a;
        }

        void set_a(int _a ){
            a = _a;
        }


        virtual void pt() { std::cout << a << "quto\n";}
    };


}
