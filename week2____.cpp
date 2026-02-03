//parameterised constructor
#include<iostream>
using namespace std;
class Student
{
    int roll;
    public:
    //parameterised constructor
    Student (int r)
    {
        roll=r;
    }
    void display()
    {
      cout << "Roll: " << roll << endl;
    }
};
int main()
{
    Student s1(101);
    s1.display();
    return 0;
}