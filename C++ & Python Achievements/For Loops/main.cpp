#include <iostream>

using namespace std;

//This program checks if the number inputed by the user is prime or not.

int main()
{
    int n = 0;

    bool isPrime = 0;

    cin>> n;

    if(n < 500.0)
    {
        if(n != 2)
        {
            for(int i = 2.0; i < n; i++)
            {
                if(n % i != 0.0)
                    isPrime = 1;
                else
                {
                    isPrime = 0;
                    break;
                }
            }
        }
        else
            isPrime = 1;

        if(isPrime)
            cout << "\nYES\n";
        else
            cout << "\nNO\n";
    }
}
