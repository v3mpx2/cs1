#include<iostream> 
#include<cmath>
using namespace std;

int main()
{
    double rad;
    double vol;
    
    cout << "enter radius" << endl;
    cin >> rad;
    vol = (4.0/3.0)*3.14*(pow(rad, 3));
    cout << "volume: " << vol << endl;
}