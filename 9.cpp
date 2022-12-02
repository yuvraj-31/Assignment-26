/******************************************************************************
9. Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit..

*******************************************************************************/

#include <iostream>

using namespace std;

class bill{
         float unit;
         float rupees;
    public:
           void get(float x)
           {
               unit =x;
           }
          void calculateBill()
           {
               if(unit>=0 && unit<=100)
               {   cout<<"first"<<endl;
                   rupees=unit*1.20;
               }
               else if(unit>=101 && unit<=200)
               {
                   rupees=unit*2;
               }
              else  if(unit>=201)
               {
                   rupees=unit*3;
               }
           }
         void display()
         {
             cout<<"Total cost: "<<rupees;
         }
};
int main()
{
   
bill b1;
b1.get(5);
b1.calculateBill();
b1.display();
    return 0;
}
