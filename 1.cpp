/******************************************************************************
1. Define a class Complex to represent a complex number with instance variables a and
b to store real and imaginary parts. Also define following member functions
a. void setData(int,int)
b. void showData()
c. Complex add(Complex)
*******************************************************************************/

#include <iostream>

using namespace std;

class complex{
                int a;
                int b;
        public:
          void setdata(int x,int y)
          {
              a=x;
              b=y;
          }
          void showdata()
          {
              cout<<a<<" + "<<"i"<<b<<endl;
          }
          complex add(complex x)
          {
              complex temp;
              temp.a=a+x.a;
              temp.b=b+x.b;
              return temp;
          }
};
int main()
{
    complex c1,c2;
    c1.setdata(2,3);
    c2.setdata(4,6);
    
    c1.showdata();
    c2.showdata();
    complex c3;
    c3=c1.add(c2);
    c3.showdata();
    return 0;
}
