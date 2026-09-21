#include<iostream>
using namespace std;

int main()
{
    int num = 0;
    int count = 0;

    cout<<"Enter Number :";
    cin>>num;

    if(num == 0)
    {
        count = 1;
    }
    else
    {
    while (num != 0)
        {
            num = num / 10;
            count++;
        }
    }

    cout<<count;

    return 0;
}
