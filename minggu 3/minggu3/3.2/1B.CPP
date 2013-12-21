#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
  clrscr();
  int ang,ip;
  cout<<"masukkan tahun angkatan: ";cin>>ang;
  cout<<"masukkan IPS: ";cin>>ip;
  if((ang>1999)&&(ip>2.75))
  {
    cout<<"anda dapat menjadi assisten";
    cout<<"cek nilai mata kuliah yang diingankan";
  }
    cout<<"terima kasih atas partisipasi anda";
  getch();
}