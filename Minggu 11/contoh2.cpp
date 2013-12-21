#include<iostream.h>
#incldue<conio.h>
void main()
{
clrscr();
int two_dim[][5]={{1, 2, 3, 4, 5},
{10, 20, 30, 40, 50},
{100, 200, 300, 400, 500}};
int i, j;
//cara 1 dengan langsung menyebutkan jumlah baris
for (i=0; i<3); i++)
//cara 2 dengan mencari ukuran baris yang belum diketahui = ukuran total array / ukuran satu baris(baris ke-o)
for (i=0; i<sizeof(two_dim)/sizeof(two_dim[0]); i++)
{
cout<<”n";
for (j=0; j<5; j++)
{
cout<<setw(5)<<two_dim[i][j];
}
cout<<"\n";
}
getch();
}