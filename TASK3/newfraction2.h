/**gx6174jg
Jie
Mohammad Sameer Khan 
23/1
newfraction2.h*/



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
        fraction operator+(fraction x);
        fraction operator-(fraction x);
        friend istream &operator>>( istream  &input, fraction &f ){
            input>>f.num>>f.denom;
            return cin;
        }
};

fraction operator*( fraction x, fraction y);
fraction operator/( fraction x, fraction y);
int gcd(int a, int b);
ostream &operator<<( ostream &output,  fraction f ) ;

#endif

