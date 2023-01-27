/**gx6174jg
Jie
Mohammad Sameer Khan 
23/1
fraction.cpp*/

#include "fraction.h"

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
    cout<<num<<"/"<<denom;
}