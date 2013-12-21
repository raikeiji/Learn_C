//latihan UAS
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int max,sel,cel,rea,fah;
    cout<<"Tabel Konversi Celcius ke Reamuhr dan Fahrenheit";
    cout<<"\nMasukkan nilai suhu minimum:";
    cin>>cel;
    cout<<"Masukkan nilai suhu maksimum:";
    cin>>max;
    cout<<"Masukkan selisih kenaikan:";
    cin>>sel;

    cout<<endl;
    cout<<"Celsius\t"<<"Reamur\t"<<"Fahrenheit\t\n";
    for (;cel<=max;)
    {
        fah=(cel*1.8)+32;
        rea=cel*0.8;
        cout<<cel<<"\t"<<rea<<"\t"<<fah<<"\t";

        cel=cel+sel;
        cout<<endl;
    }
return 0;
}
