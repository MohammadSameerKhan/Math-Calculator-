/**gx6174jg
Jie
Mohammad Sameer Khan 
23/1
project1_task2*/

#include"newfraction1.h" 

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
    
    cout<<"\nThe arithmetic operation on these two fractions:\n";
    cout<<"f1 + f2 = ";Add(f1,f2).display();
    cout<<"\nf1 - f2 = ";Sub(f1,f2).display();
    cout<<"\nf1 * f2 = ";Mul(f1,f2).display();
    cout<<"\nf1 / f2 = ";Div(f1,f2).display();
    
}

