#include<iostream>
using namespace std;

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0f;
    fSum = fNo1 + fNo2;    // Business Logic
    return fSum;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    cout<<"Enter first number : "<<endl;
    cin>>fValue1;

    cout<<"Enter second number : "<<endl;
    cin>>fValue2;
    
    fRet = AdditionTwoNumbers(fValue1,fValue2);

    cout<<"Addition is : "<<fRet<<endl;

    return 0;
}
