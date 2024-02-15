#include <iostream>

using namespace std;

//This program outputs the difference between quotient of the
//two user inputed numbers once with decimal and other without.
int main()
{
    double num1, num2;
    int num3, num4;

    cin>> num1 >> num2;

    num3 = num1, num4 = num2;

    cout<< (num1 / num2) - (num3 / num4);
}
