/******************************************************************************
8. Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor.

*******************************************************************************/

#include <iostream>
#include <cstring>


using namespace std;

class Bank{
              float principal;
              float rate;
              int year;
        public:  
              Bank(float x, float y,int z)
              {
                  principal=x;
                  rate=y;
                  year=z;
              }
            void  interest()
              {
                  cout<<"interest: "<<(principal*rate*year)/100<<endl;
              }
              
};
int main()
{
   Bank b1(3,4,5);
   b1.interest();

    return 0;
}
