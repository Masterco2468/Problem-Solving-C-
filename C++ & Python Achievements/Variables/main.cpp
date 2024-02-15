#include<iostream>
using namespace std;

// This program switches the two user inputed numbers in the output

int main()
{
    int num1, num2, num3 = -1;

    cin>> num1 >> num2;

    num3 = num2, num2 = num1, num1 = num3;

    cout<< num1 << " " << num2 << endl;
    return 0;
}
