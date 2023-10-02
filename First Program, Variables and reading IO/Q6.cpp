#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    int c = a;
    a = b;
    b = c;
    cout << "a=" << a << " b=" << b;
    return 0;
}