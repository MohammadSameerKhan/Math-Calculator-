/**gx6174jg
Jie
Mohammad Sameer Khan 
23/1
project1_task3*/

#include"newfraction2.h" //for linux
//#include"newfraction1.cpp" //for windows
int main()
{
    fraction f1;
    fraction f2;
    cout<<"Enter the first fraction: numerator denominator\n";
    cin>>f1;
    cout<<"Enter the Second fraction: numerator denominator\n";
    cin>>f2;
    cout<<"The two fractions entered are\n";
    cout<<"f1 = ";
    cout<<f1;
    cout<<"\nf2 = ";
    cout<<f2;
    
    cout<<"\n\nThe arithmetic operation on these two fractions:\n";
    cout<<"f1 + f2 = ";
    fraction f3;
    f3 = f1+f2;
    cout<<f3;
    cout<<"\nf1 - f2 = ";
    f3 = f1-f2;
    cout<<f3;
    cout<<"\nf1 * f2 = ";
    f3 = f1*f2;
    cout<<f3;
    cout<<"\nf1 / f2 = ";
    f3 = f1/f2;
    cout<<f3;
}