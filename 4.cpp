/******************************************************************************
4. Define a class Counter and Write a program to Show Counter using Constructor.

*******************************************************************************/

#include <iostream>

using namespace std;

class counter{
    int count;
    public:
     counter(){
         count=0;
         cout<<"counter = "<<count;
         }
//   void incre_count()
//     {
//         count++;
//     }
    
};
int main()
{
   counter c1;

    return 0;
}
