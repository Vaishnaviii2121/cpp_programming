#include<iostream>
using namespace std;

int Maximum(int num1, int num2, int num3)
{
    if(num1 > num2 && num1>num3)
    {
        return num1;
    }
    else if(num2 > num1 && num2 > num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

int main()
{
    int No1 = 0, No2 = 0, No3 = 0;
    int iRet = 0;

    cout<<"Enter First Number : \n";
    cin>>No1;

    cout<<"Enter second Number : \n";
    cin>>No2;

    cout<<"Enter Third Number : \n";
    cin>>No3;

    iRet = Maximum(No1,No2,No3);

    cout<<"Maximum Number is : "<<iRet;

    return 0;
}
