/******************************************************************************
5. Define a class Date and write a program to Display Dateand initialise date object
using Constructors.
*******************************************************************************/

#include <iostream>

using namespace std;

class date{
    int day;
    int month;
    int year;
    public:
     date(int x, int y, int z){
         day=x;
         month=y;
         year=z;
         }
      void display_date()
      {
          cout<<day<<"-"<<month<<"-"<<year<<endl;
      }
    
};
int main()
{
   date d1(2,3,2012);
   d1.display_date();

    return 0;
}
