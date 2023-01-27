/**gx6174jg
Jie
Mohammad Sameer Khan 
23/1
newfraction1.h*/



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
        void shorten();
};

fraction Add( fraction x, fraction y);
fraction Sub( fraction x, fraction y);
fraction Mul( fraction x, fraction y);
fraction Div( fraction x, fraction y);
int gcd(int a, int b);
#endif