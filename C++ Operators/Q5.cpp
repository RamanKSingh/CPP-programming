#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int first=num%10;
    int second=(num/10)%10;
    int third=(num/100)%10;
    int sum=first+second+third;
    cout<<sum;
    return 0;
}