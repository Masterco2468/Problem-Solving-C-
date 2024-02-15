#include <iostream>

using namespace std;

//This program show the intersection interval
//                 between two user inputed intervals.

int main()
{
    int s1, e1, s2, e2;
    int s=0, e=0;
    cin>> s1 >> e1 >> s2 >> e2;

    cout<< endl;

     if(s1 > e2 || s2 > e1)
     {
        cout<< "-1";
     }
    else
    {
        if(s1 >= s2) s=s1; else s=s2;
        if(e1 <= e2) e=e1; else e=e2;

        cout<< s << " " << e;
    }

}
