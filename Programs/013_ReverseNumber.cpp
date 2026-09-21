#include<iostream>
using namespace std;

int main()
{
    int num = 0;
    int rev = 0;
    int digit = 0;

    cout<<"Enter Number :";
    cin>>num;

    while(num != 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    cout << "Reverse is : " << rev;

    return 0;
}
