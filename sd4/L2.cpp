#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int Bil[10];
int i, j, jumlah;

int main(){
	system("CLS");
	cout<<"Masukkan banyak bilangan: "; cin>>j;
	for(i=0; i<j; i++){
		cout<<"Masukkan bilangan ke "<<i+1<<" = ";
		cin>>Bil[i];
		//proses akumulasi dari bilangan yang diinput
		jumlah += Bil[i];
	}
	cout<<"Jumlah Bilangan yang diinput = "<<jumlah<<endl;
	cout<<"Bilangan yang diinput adalah \n";
	for(i=0; i<j; i++)
		cout<<setw(4)<<Bil[i];
	
	return 0;
}
