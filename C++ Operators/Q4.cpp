#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int a=num/10000;
    int b=(num%100)/10;
    cout<<a+b;

    return 0;
}