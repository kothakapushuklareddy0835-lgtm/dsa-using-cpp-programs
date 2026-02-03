//dynamic constructor
#include<iostream>
using namespace std;
class Array
{
    int *arr;
    public:
    Array(int size)//dynamic constructor
    {
        arr=new int[size];
        for(int i=0;i<size;i++)
        arr[i]=i+1;
    }
    void display(int size)
    {
        for(int i=0;i<size;i++)
        cout << arr[i] << " ";
    }
};
int main()
{
    Array a1(5);
    a1.display(5);
    return 0;
}