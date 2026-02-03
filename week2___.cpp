//default constructor
#include <iostream>
using namespace std;
class Student
{
    int roll;
    public:
    //Default constructor
    Student()
    {
        roll=0;
    }
    void display()
    {
        cout << "Roll = " << roll << endl;
    }
};
int main()
{
    Student s1;
    s1.display();
    return 0;
}