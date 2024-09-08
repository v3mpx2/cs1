#include<iostream>
using namespace std;

int main()
{
    double x;
    double y;
    
    cout << "enter price" << endl;
    cin >> x;

    y = (x*9.0)/100 + x;

    cout << "original price: " << x << "price + tax: " << y << endl;
}