#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int garis(); // prototipe fungsi garis
int main()
{
    garis(); // panggil fungsi garis
    cout<<setiosflags(ios::left); //atur rata kiri
    cout<<setw(26)<<"J U D U L  B U K U"<<"PENGARANG"<<endl;

    garis(); // panggil kembali fungsi garis
    cout<<setw(26)<<"Mastering Borland C++"<<"Tom Swan"<<endl;
    cout<<setw(26)<<"Turbo C++ By Example"<<"Greg Perry & M. Johnson"<<endl;
    cout<<setw(26)<<"Converting C to C++"<<"Len Dorfman"<<endl;

    garis(); // panggil kembali fungsi garis
}

int garis() // garis untuk mengerjakan fungsi
{
    int i;

    for (i=0;i<49;i++)
        cout<<'-';
    cout<<endl;
}
