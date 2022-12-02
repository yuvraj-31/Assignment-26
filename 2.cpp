/******************************************************************************
2. Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)
*******************************************************************************/

#include <iostream>

using namespace std;

class Time{
                int h;
                int m;
                int s;
        public:
          void setTime(int x,int y,int z)
          {
              h=x;
              m=y;
              s=z;
          }
          void showTime()
          {
              cout<<h<<" hour "<<m<<" min "<<s<<" seconds"<<endl;
          }
          void normalize()
          {
              m=m+(s/60);
              s=s%60;
              h=h+(m/60);
              m=m%60;
          }
          Time add(Time x)
          {
              Time temp;
              temp.h=h+x.h;
              temp.m=m+x.m;
              temp.s=s+x.s;
              return temp;
          }
};
int main()
{
    Time t1,t2;
    t1.setTime(5,125,130);
    t2.setTime(4,6,7);
    t1.normalize();
    t2.normalize();
    t1.showTime();
    t2.showTime();
    Time t3;
    t3=t1.add(t2);
    t3.normalize();
    t3.showTime();
    return 0;
}
