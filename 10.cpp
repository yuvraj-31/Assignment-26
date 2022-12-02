/******************************************************************************
10. Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the result.

*******************************************************************************/

#include <iostream>

using namespace std;

class StaticCount{
    
    public:
       static int x;
         int y=0;
          
         void display()
         {
             cout<<x<<","<<y<<endl;
         }
};
int StaticCount::x=0;

void increment()
{
    x++;
    y++;
}
int main()
{
   
StaticCount s1;
increment();
s1.display();
increment();
s1.display();
increment();
s1.display();
    return 0;
}
