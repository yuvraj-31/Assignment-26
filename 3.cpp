/******************************************************************************
3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.

*******************************************************************************/

#include <iostream>

using namespace std;

class cube{
    int a;
    public:
     cube(int x){
          a=x;
         }
   void volume()
    {
        cout<<"volume of cube "<<a*a*a<<endl;
    }
};
int main()
{
    cube c1(3);
    c1.volume();

    return 0;
}
