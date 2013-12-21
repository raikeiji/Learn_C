#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    float x[10];
    int i=1;
    int maks=-32676;
    int min=32676;
    int b;
    cout<<"masukan jumlah input kurang dari 10: ";
    cin>>b;
    for(i=1;i<=b;i++)
    {
        cout<<"input["<<i<<"]= ";
        cin>>x[i];
    }
    for (i=1;i<=b;i++)
    {
        if(x[i]>maks)
        {
            maks=x[i];
        }
        if(x[i]<min)
        {
            min=x[i];
        }

    }
    cout<<"maksimum:"<<maks<<endl;
    cout<<"minimum:"<<min<<endl;

}
