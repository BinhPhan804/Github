#include <iostream>
using namespace std;

int main()
{
    int a   = 5;
    int &b  = a;
    b = 1;
    cout << b;
    return 0;
}
