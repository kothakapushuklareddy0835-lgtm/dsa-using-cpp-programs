#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> students;
    students[101]="shukla";
    students[102]="shravaya";
    students[103]="shreya";
    cout << "Student Details:\n";
    for(map<int,string>::iterator it=students.begin();it!=students.end();it++){
        cout<<"ID:"<<it->first<<"name:"<<it->second<<endl;
    }
    return 0;
}