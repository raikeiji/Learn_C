#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  float harga,total;
  cout<<"masukkan harga barang: ";cin>>harga;
  if(harga>100000)
  {
    total=(harga)-(harga*0.1);
    cout<<"anda mendapat dikon 10% dan total pembayaran: "<<total;
  }
  else
  {
  cout<<"total pembayaran: "<<harga;
  }
  getch();
}