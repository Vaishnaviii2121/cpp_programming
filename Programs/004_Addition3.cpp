#include<iostream>
using namespace std;

int add(int a ,int b)
{
    return a + b;
}

int main()
{
    int i = 0, j = 0, ans = 0;

    cout<<"Enter first number : ";
    cin>>i;

    cout<<"Enter second number : ";
    cin>>j;

    ans = add(i,j);

    cout<<"Addition is : "<<ans<<endl;

    return 0;
}
