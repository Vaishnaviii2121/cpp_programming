#include<iostream>
using namespace std;

int Maximum(int num1, int num2)
{
    if(num1 < num2)
    {
        return num2;
    }
    else
    {
        return num1;
    }
}

int main()
{
    int No1 = 0, No2 = 0;
    int iRet = 0;

    cout<<"Enter First Number : \n";
    cin>>No1;

    cout<<"Enter second Number : \n";
    cin>>No2;

    iRet = Maximum(No1,No2);

    cout<<"Maximum Number is : "<<iRet;

    return 0;
}
