#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a,b,c,d=0,jumlah[20];
    char jawaban[50],tebakan[50];
    cout<<"masukkan berapa jumlah mata pejalaran : ";
    cin>>a;
    for (b=0;b<a;b++)
    {
        cout<<"berapa jumlah soal untuk mata pelajaran "<<b+1<<"? ";
        cin>>jumlah[b];
        for (c=0;c<jumlah[b];c++)
        {
            cout<<"jawaban untuk mata pelajaran "<<c+1<<":";
            cin>>jawaban[c];
        }
    }
    for (b=0;b<a;b++)
    {
        cout<<"mata pelajaran "<<b+1<<":";
        for (b=0;b<a;b++)
        {
        cout<<"\nmasukkan tebakan anda "<<b+1<<":";
        cin>>jawaban[d];
            if (jawaban[c]!=tebakan[d])
            {
                d++;
            }
        }
    }
    cout<<"Anda memiliki jawaban yang salah mata pelajran "<<b+1<<"sebanyak "<<d;

}
