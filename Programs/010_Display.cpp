#include<iostream>
using namespace std;

int Display(int num)
{
    int sum = 0;

    for(int i = 1;i<=num ; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    int No = 0;
    int iRet = 0;

    cout<<"Enter Number : ";
    cin>>No;

    iRet = Display(No);

    cout<<iRet;

    return 0;
}
