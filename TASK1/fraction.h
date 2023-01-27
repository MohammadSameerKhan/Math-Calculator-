/**gx6174jg
Jie
Mohammad Sameer Khan 
23/1
fraction.h*/

#include<iostream>
#ifndef FRACTION_H
using namespace std;

class fraction{
    private:
        int num,denom;
    public:
        fraction();
        fraction(int x,int y);
        void setnum(int x);
        void setdenom(int y);
        int getnum();
        int getdenom();
        void display();
};

#endif