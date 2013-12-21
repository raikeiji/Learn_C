#include<iostream>
#include<conio.h>
using namespace std;

int guess(int x);
int guess(int x)//fungsi main untuk memanggil
{
    int z,y;
    y=45;
    for(z=0;x!=y;z++)
    {
        cout<<"\nTry again..What is your guess? ";
        cin>>x;
        if(x<y)
        {
            cout<<"\nYour guess too low";
        }
        else if(x>y)
        {
            cout<<"\nYour guess too high";
        }
        else
        {
            cout<<"\nCongratulation! Your got it right";
        }
    }
    cout<<"\nit took you only "<<z<<" tries to guess";
}
int main()//fungsi untuk menghitung
{
    guess(34);
    guess(78);
    guess(45);
    getch();
}
