#include<iostream>
using namespace std;
class complex 
{
    float real,img;
    public:
    complex()
    {
        real=0;
        img=0;
    };
    complex(float x,float y)
    {
        real=x;
        img=y;
    };
    complex operator+(complex b);
    complex operator*(complex m);
    void display();
    // friend complex multi ();
};
complex complex::operator+(complex b)
{
    complex sum;
    sum.real=real+b.real;
    sum.img=img+b.img;
    return sum;
}
void complex::display()
{
    cout<<real<<"+i"<<img<<endl;
}
complex complex::operator*(complex m)
{
    complex multi;
    multi.real=((real*m.real)-(img*m.img));
    multi.img=((real*m.img)+(img*m.real));
    return multi;
}
int main()
{
   float a,b;
   cout<<"Enter the value for real and imaginary part of the first number"<<endl;
   cout<<"Enter the value for real part :";
   cin>>a;
   cout<<"Enter the value imaginary part :";
   cin>>b;
   complex c1(a,b);     //creating a complex number and storing its values in c1 object.
   cout<<endl;
   cout<<"Enter the value for real and imaginary part of the second number"<<endl;
   cout<<"Enter the value for real part :";
   cin>>a;
   cout<<"Enter the value for the imaginary part:";
   cin>>b;
   cout<<endl;
   complex c2(a,b);     //creating a complex number and storing its values in c2 object.
   complex c3, c4;
   c3=c1+c2;
   cout<<"The addition of two complex number is: "<<endl;
   c3.display();
   cout<<"The multiplication of two complex number is: "<<endl;
   c4=c1*c2;
   c4.display();
   return 0;
}