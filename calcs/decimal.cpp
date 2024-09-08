#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float d;
    
    cout << "enter decimal number" << endl;
    cin >> d;

    cout << "leftover: " << ceil(d - floor(d)) << endl;
}