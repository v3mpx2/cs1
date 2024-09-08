#include<iostream>
using namespace std;

int main()
{
    float f;

    cout << "enter in degrees fahrenheit" << endl;
    cin >> f;
    cout << "degrees in celsius: " << float (f-32)*(5.0/9) << endl;
}
   