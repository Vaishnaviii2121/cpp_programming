#include<iostream>
using namespace std;

void Display(int num)
{
    for(int i = num;i>=1 ; i--)
    {
        cout<<i<<" ";
    }
}

int main()
{
    int No = 0;

    cout<<"Enter Number : ";
    cin>>No;

    Display(No);

    return 0;
}
