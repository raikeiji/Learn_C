#include<iostream>
#include<conio.h>
using namespace std;

int main(){

	int a,b,c,d,jml[20];
	char kunci[100][100],jwbn[100][100];
	cout<<"masukan mata kuliah:";
	cin>>a;
	for(b=0;b<a;b++)
	{
		cout<<"masukan jumlah soal makul ke "<<b+1<<":";
		cin>>jml[b];
		for(c=0;c<jml[b];c++)
		{
            cout<<"masukan kunci jawaban "<<c+1<<":";
            cin>>kunci[b][c];
		}
    }
	for(b=0;b<a;b++)
	{
		cout<<"mata kuliah "<<b+1<<":"<<endl;
		d=0;
        for(c=0;c<jml[b];c++)
        {
            cout<<"masukan jawaban anda "<<c+1<<":";
            cin>>jwbn[b][c];
            if(jwbn[b][c]!=kunci[b][c])
            {
                d++;
            }
        }
		cout<<"jumlah salah makul ke"<<b+1<<":"<<d<<endl;
    }
  getch();
}
