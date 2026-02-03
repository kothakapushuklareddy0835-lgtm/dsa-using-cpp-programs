#include <iostream>
#include <string>
using namespace std;
class Student{
    private:
    int rollnumber;
    string name;
    float marks;
    public:
    //constructor
    Student()
    {
        rollnumber=0;
        name=" ";
        marks=0.0;
    }
    //function to input details
    void input()
    {
        cout << "Enter roll number: ";
        cin >> rollnumber;
        cin.ignore();
        cout << "Enter name:";
        getline(cin,name);
        cout << "Enter marks:";
        cin >> marks;
    }
    //functions to display the details
    void display()
    {
        cout << "Roll Number: " << rollnumber << "\t"<< "Name: " << name << "\t" << "Marks:" << marks << endl;
    }
    //Destruvtor
    ~Student()
    {
        cout << "Student object with roll number" << rollnumber << " is destroyed." << endl;
    }
};
int main()
{
    int n;
    cout << "Enter number of students:";
    cin >> n;
    //dynamic allocation of student objects
    Student* students = new Student[n];
    //input details
    for(int i=0;i<n;i++)
    {
        cout << "Enter details of student " << i+1 << ":\n";
        students[i].input();
    }
    //display details 
    cout << "\n Roll Number\t Name\t Marks\n";
    for(int i=0;i<n;i++)
    {
        students[i].display();
    }
    //release allocated memory
    delete[]students;
    return 0;
}
