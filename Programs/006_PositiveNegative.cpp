#include<iostream>
using namespace std;

int main()
{
    int No = 0;

    cout<<"Enter Number :"<<endl;
    cin>>No;

    if(No == 0)
    {
        cout<<"Number is Zero";
    }
    else if(No < 0)
    {
        cout<<"Negative Number";
    }
    else
    {
        cout<<"Positive Number";
    }
    
    return 0;
}
