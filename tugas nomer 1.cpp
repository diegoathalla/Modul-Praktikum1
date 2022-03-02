#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main(){
	int data;
	float nilai,jumlah,rata;
	
	cout<<"Menghitung Banyak jumlah nilai data dan rata rata"<<endl<<endl;
	cout<<"Masukkan nilai banyak data="; cin>>data;
	
	for(int i=1;i<=data;i++){
		cout<<"Data["<<i<<"]="; cin>>nilai;
			jumlah += nilai;
	}
	rata=jumlah/data;
	
	cout<<"Banyaknya data="<<data<<endl;
	cout<<"Rata-rata="<<rata<<endl;
	cout<<"Jumlah="<<jumlah<<endl<<endl;
	cout<<"Press any key to continue...."; getch();
}
