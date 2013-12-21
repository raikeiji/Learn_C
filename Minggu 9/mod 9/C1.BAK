#include<iostream.h>
#include<conio.h>
void main(void)
{
int i, suhu[7];
float rerata, jml;
clrscr();
cout<<"Program mencatat suhu udara harian\n";
cout<<"Masukkan data-data suhu udara dalam sepekan!\n";
// input data
for (i=1; i <= 7; i++)
  {
  cout<<"Suhu hari ke- "<< i<<' ';
  cin>>suhu[i-1];
  }
  // menjumlahkan elemen array
  jml = 0;
for (i=0; i <= 6; i++)
  {
  jml = jml + suhu[i];
  }
  // menghitung suhu rata-rata
  rerata = jml / 7;
  // menampilkan kembali data-data yg telah dicatat dan rata-ratanya
  cout<<"Data-data suhu yang telah dicatat adalah:\n";
for (i=0; i <= 6; i++)
  cout<< suhu[i]<<endl;
  cout<<"Suhu rata-rata dalam sepekan = "<< rerata<<endl;
getch();
}