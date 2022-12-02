/******************************************************************************
6. Define a class student and write a program to enter student details using constructor
and define member function to display all the details.

*******************************************************************************/

#include <iostream>
#include <cstring>


using namespace std;

class student{
              int roll_no;
              char name[20];
        public:  
              student(char a[20],int b)
              {
                  strcpy(name,a);
                  roll_no=b;
              }
              void display()
              {
                  cout<<"name: "<<name<<" roll-no: "<<roll_no<<endl;
              }
};
int main()
{
    student s1("Yuvraj",20);
    s1.display();

    return 0;
}
