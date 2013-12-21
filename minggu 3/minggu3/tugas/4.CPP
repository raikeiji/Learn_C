
	long  b_pen,kom_1,kom_2,kom_3;
	cout<<"masukkan hasil penjualan";cin>>b_pen;
	if (b_pen<10000000)
	{
	kom_1=(0+b_pen);
	cout<<"maka uang yang didapat ialah "<<kom_1;
	}
	else if ((b_pen>=10000000)&&(b_pen<=50000000))
	{
	kom_2=((b_pen*0.02)+b_pen);
	cout<<"maka hasil yang didapat ialah "<<kom_2;
	}
	else if (b_pen>50000000)
	{
	kom_3=((b_pen*0.03)+b_pen);
	cout<<"maka hasil yang didapat ialah "<<kom_3;
	}
	getch();
}