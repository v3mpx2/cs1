#include<iostream>
using namespace std;

int main()
{
    int x = 1;
    int y = 2;

    x = x + y;
    y = x - y;
    x = x - y;

    cout << "x: " << x << "y: " << y << endl;
}