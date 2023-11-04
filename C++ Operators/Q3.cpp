#include<iostream>
using namespace std;
int main()
{
    int Total_Students;
    cin>>Total_Students;
    float boys=0.55*Total_Students;
    float boystopper=.68*boys;
    float topper=boystopper*10/8;
    int girlstopper=((topper-boystopper)*100/topper);
    cout<<girlstopper;
    
    return 0;
}