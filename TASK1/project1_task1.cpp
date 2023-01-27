/**gx6174jg
Jie
Mohammad Sameer Khan 
23/1
project1_task1*/

#include"fraction.h"  

// #include"fraction.cpp"  
int main()
{
    int x,y;
    cout<<"Enter the first fraction: numerator denominator\n";
    cin>>x>>y;
    fraction f1(x,y);
    fraction f2;
    cout<<"Enter the Second fraction: numerator denominator\n";
    cin>>x>>y;
    f2.setnum(x);
    f2.setdenom(y);
    cout<<"The two fractions entered are\n";
    cout<<"f1 = ";
    f1.display();
    cout<<"\nf2 = ";
    cout<<f2.getnum()<<"/"<<f2.getdenom()<<"\n";
}