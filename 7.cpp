/******************************************************************************
7. Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box.

*******************************************************************************/

#include <iostream>
#include <cstring>


using namespace std;

class Box{
              int length;
              int breadth;
              int height;
        public:  
              Box(int x, int y, int z)
              {
                  length=x;
                  breadth=y;
                  height=z;
              }
            void  volume()
              {
                  cout<<"volume: "<<length*breadth*height<<endl;
              }
              
};
int main()
{
   Box b1(3,4,5);
   b1.volume();

    return 0;
}
