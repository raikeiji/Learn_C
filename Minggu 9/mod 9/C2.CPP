#include<iostream.h>
#include<conio.h>
void main(void)
{
int i;
char nilai[10];
clrscr();
cout<<"Program mencatat data nilai matakuliah\n";
cout<<"Masukkan data-data nilai (huruf A-E) dari 10 mahasiswa\n";
// input data
for (i=1; i <= 10; i++)
  {
  cout<<"Nilai matakuliah ke- " <<i;
  cin>>nilai[i-1];
  }
  // menampilkan kembali data-data yg telah dicatat
  cout<<"Data-data nilai yang telah dicatat adalah:\n";
for (i=0; i <= 9; i++)
  cout<< nilai[i]<<" ";
  getch();
}