// create the vector operations in the form of menu using switch case
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector <int> v;
    int choice,x,key,n;

    do{
        cout << "\n-----Vector Operations Menu-----";
        cout << "\n1.Insert element";
        cout << "\n2.Dispaly elements";
        cout << "\n3.Sort elements";
        cout << "\n4.Search elements";
        cout << "\n5.Exit";
        cout << "\n6.Delete";
        cout << "\nEnter your choice:";
        cin >> choice;

        switch(choice)
        {
            case 1:
            cout << "Enter number of elements to insert:";
            cin >> n;
            cout << "Enter elements:\n";
            for(int i=0;i<n;i++)
            {
                cin >> x;
                v.push_back(x);
                
            }
            break;

            case 2:
            if(v.empty())
            {
            cout <<"Vector is empty";
            }
            else
            {
                cout << "Vector elements:";
                for(vector<int>::iterator it = v.begin();it!=v.end();it++)
                {
                    cout << *it << " ";
                }
            }
            break;
            case 3:
            if(v.empty())
            {
                cout << "Vector is empty, cannot sort";
            }
            else 
            {
                sort(v.begin(),v.end());
                cout << "Vector sorted successfully";
            }
            break;
            case 4:
            if(v.empty())
            {
                cout << "Vector is empty,cannot search";
            }
            else 
            {
                cout << "Enter elements to search:";
                cin >> key;
                vector<int>::iterator pos=find(v.begin(),v.end(),key);
                if(pos!=v.end())
                {
                    cout << "Elements found at position" << (pos-v.begin())+1;
                }
                else
                {
                    cout << "Elements not found";
                }
            }
            break;
            case 5:
            cout << "Exiting Program...";
            break;
            case 6:
            cout << "Deleting the element ";
            v.pop_back();
            break;
            default:
            cout << "Invaild choice! Try again.";
        }
    }while(choice!=6);
    return 0;
}