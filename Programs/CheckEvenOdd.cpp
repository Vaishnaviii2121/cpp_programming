#include<iostream>
using namespace std;

bool CheckEvenOdd(int iNo)
{
    if (iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the Number : "<<endl;
    cin>>iValue;

    bRet = CheckEvenOdd(iValue);
    
    if(bRet == true)
    {
        cout<<"Even Number";
    }
    else
    {
        cout<<"Odd Number";
    }

    return 0;
}
