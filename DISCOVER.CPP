//Nama: Engelbertus Vione
//NIM : 125314112
#include<iostream.h> //fungsi dan pustaka yangdijalankan disimpan dalam
		     //pustaka iostream yang bertujuan menjalankan
		     //petrintah cout dan cin
#include<conio.h> //fungsi dan pustaka yang dijalankan disimpan dalam
		  //pustaka iostream yang bertujuan untuk menjalankan
		  //perintah lcrscr, dan getch
void main() //merupakan judul fungsi
{  //awalan program
 clrscr(); //fungsi untuk menghapus hasil output sebelumnya
 long b_barang,h_barang,h_1,h_2,h_3,h_4;  //data inputan dan long merupakan
					  //salah satu data integer
					  //memiliki kapassitas lebih besar dari int
 cout<<"masukkan banyaknya barang: ";cin>>b_barang;//cout untuk menampilkan
						   //cin salah satu funsi untuk menampilkan data integer
 cout<<"masukkan harga barang: ";cin>>h_barang;
 if (b_barang<3) //statement if else (berupa kalimat pengandaian):
		//< salah satu ekspresi boolean yang menyatakan lebih dari
 {    //awalah dalam perintah if
   h_1=(0+h_barang); cout<<"\nbanyak barang: "<<b_barang; //proses program
   cout<<"\nbesar diskon o%";
   cout<<"\ntotal harga yang harus dibayar: "<<h_1;
 }  //akhiran dalam perintah if
 else if ((b_barang>=3)&&(b_barang<6))//>= merupakan ekspresi boolean yang menyatakan lebih besar dari
				      //&& merpakan ekspresi boolean yang menyatakan dan
 { //awalah dalam perintah if
   h_2=(h_barang*0.05); //proses program
   cout<<"\nbanyak barang: "<<b_barang;
   cout<<"\nbesar diskon 5%";
   cout<<"\ntotal harga yang harus dibayar: "<<h_2;
 }  //akhiran dalam perintah if
 else if ((b_barang>=6)&&(b_barang<12))
 {   //awalah dalam perintah if
  h_3=(h_barang*0.1);  //proses program
  cout<<"\nbanyak barang: "<<b_barang;
  cout<<"\nbesar diskon 10%";
  cout<<"\ntotal harga yang harus dibayar: "<<h_3;
 }   //akhiran dalam perintah if
 else if (b_barang<=12) //salah satu ekspresi boolean yang menyatakan kurang dari
 {  //awalah dalam perintah if
   h_4=(h_barang*0.15); //proses program
   cout<<"\nbanyak barang: "<<b_barang;
   cout<<"\nbesar diskon 15%";
   cout<<"\ntotal harga yang harus dibayar: "<<h_4;
 }  //akhiran dalam perintah if
 getch();//menampilkan hasil prorgam dengan perintah run
} //akhir dari program

