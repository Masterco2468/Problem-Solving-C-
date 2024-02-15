#include <iostream>

using namespace std;

//This program shows every multiple of 3 but not 4 from 3 and above until
// the number of outputs = number inputed by the user.

int main()
{
    int num, multiple = 1;
    cin>> num;

    if(1 <= num && num <= 30)
    {
        while(num > 0)
        {
            if(multiple % 3 == 0 && multiple % 4 != 0)
            {
                cout<< multiple << " ";
                num--;
            }
            multiple++;
        }
    }
}
