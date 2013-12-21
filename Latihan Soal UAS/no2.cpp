//Latihan UAS
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int fah,rea,a,x,bil[10];
    cout<<"Masukkan banyak data suhu maksimal 10: ";
    cin>>x;
for (a=1;a<=x;a++)
{
    cout<<"Masukkan suhu ke-"<<a<<" :";
    cin>>bil[a-1];
}
    cout<<"Tabel Konversi Suhu\n";
    cout<<"Celsius\t"<<"Reamur\t"<<"Fahrenheit\t\n";
for (a=1;a<=x;a++)
{
    fah=(bil[a-1]*1.8)+32;
    rea=bil[a-1]*0.8;
    cout<<bil[a-1]<<"\t"<<rea<<"\t"<<fah<<"\t";
    cout<<endl;
}
return 0;
}
