#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a;
    for(a=1;a<=5;a++)
    {
        cout<<a<<" ";
        for (int b=5;b>=0;b--)
        {
            cout<<b;
        }
        cout<<"\n";
    }
}

