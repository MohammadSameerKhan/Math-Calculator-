/**gx6174jg
Jie
Mohammad Sameer Khan 
23/1
newfraction2.cpp*/

#include "newfraction2.h"

fraction::fraction()
{
    num = 0;
    denom = 1;    
}
fraction::fraction(int x,int y)
{
    num = x;
    denom = y;
}
void fraction::setnum(int x)
{
    num = x;
}
void fraction::setdenom(int y)
{
    denom = y;
}
int fraction::getnum()
{
    return num;
}
int fraction::getdenom()
{
    return denom;
}
void fraction::display()
{
    if(num>=0 && denom>=0)
        shorten();
    cout<<num<<"/"<<denom;
}

void fraction::shorten()
{
   int y = gcd(num,denom);
   num/=y;
   denom/=y;
}

fraction fraction::operator+(fraction x)
{    
    int numerator,denominator;
    numerator = (x.getnum()*getdenom())+(getnum()*x.getdenom());
    denominator = x.getdenom()*getdenom();
    fraction temp(numerator,denominator);
    return temp;
}

fraction fraction::operator-(fraction x)
{
    int numerator,denominator;
    numerator = (getnum()*x.getdenom())-(x.getnum()*getdenom());
    denominator = x.getdenom()*getdenom();
    fraction temp(numerator,denominator);
    return temp;
}


int gcd(int a, int b)
{
    // Everything divides 0  
    if (a == 0)
       return b;
    if (b == 0)
       return a;
   
    // base case
    if (a == b)
        return a;
   
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

fraction Add( fraction x, fraction y)
{        
    int numerator,denominator;
    numerator = (x.getnum()*y.getdenom())+(y.getnum()*x.getdenom());
    denominator = x.getdenom()*y.getdenom();
    fraction temp(numerator,denominator);
    return temp;
}
        
/* Subtract function */
fraction Sub( fraction x, fraction y)
{
    int numerator,denominator;
    numerator = (x.getnum()*y.getdenom())-(y.getnum()*x.getdenom());
    denominator = x.getdenom()*y.getdenom();
    fraction temp(numerator,denominator);
    return temp;
}
        
/* Multiply function */
fraction Mul( fraction x, fraction y)
{
    int numerator,denominator;
    numerator = (x.getnum()*y.getnum());
    denominator = x.getdenom()*y.getdenom();
    fraction temp(numerator,denominator);
    return temp;
}
        
/* Divide Function */
fraction Div( fraction x, fraction y)
{
    int numerator,denominator;
    numerator = (x.getnum()*y.getdenom());
    denominator = x.getdenom()*y.getnum();        
    fraction temp(numerator,denominator);
    return temp;
}
    
/* Multiply function */
fraction operator*( fraction x, fraction y)
{
    int numerator,denominator;
    numerator = (x.getnum()*y.getnum());
    denominator = x.getdenom()*y.getdenom();
    fraction temp(numerator,denominator);
    return temp;
}
        
/* Divide Function */
fraction operator/( fraction x, fraction y)
{
    int numerator,denominator;
    numerator = (x.getnum()*y.getdenom());
    denominator = x.getdenom()*y.getnum();        
    fraction temp(numerator,denominator);
    return temp;
}

ostream &operator<<( ostream &output, fraction f ) {
    if(f.getnum()>=0 && f.getdenom()>=0)
        f.shorten();
    output << f.getnum()<<"/"<<f.getdenom();
    return output;            
}