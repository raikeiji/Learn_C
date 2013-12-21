#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int tinggi,
    baris,
    kolom;
    cout<<"Tinggi segitiga = ";
    cin>>tinggi; cout<<endl;
    for (baris=1;baris<=tinggi;baris++)
    {
        for (kolom=1;kolom<=baris;kolom++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

