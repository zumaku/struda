//program menginput Nilai Akhir mahasiswa dan menentukan nilai tertinggi dan terendah
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string.h>
using namespace std;

char nim[100][6];
char nama[100][30];
int na[100];
char NimMin[6], NimMax[6];
char namamin[30], namamax[30];
int i, j, mins, maxs, jumlah;
float rata2;

int main(){
	i=0;
	cout<<"Masukkan data mahasiswa: \n";
	cout<<"Input Nomor Induk Mahasiswa: "; cin>>nim[i];
	
	do{
		cout<<"Input Nama: "; cin>>nama[i];
		cout<<"Input Nilai Akhir: "; cin>>na[i];
		jumlah += na[i];
		i++;
		cout<<"\nInput Nomer Induk Mahasiswa: "; cin>>nim[i];
	} while(!(strcmp(nim[i], "x") == 0));
	
	i--;
	rata2 = jumlah/i;
	mins = na[0]; maxs = na[0];
	strcpy(namamax, nama[0]); strcpy(NimMax, nim[0]);
	strcpy(namamin, nama[0]); strcpy(NimMin, nim[0]);
	for (j=1; j<=i; i++){
		if(na[j] < mins){
			mins = na[j];
			strcpy(NimMin, nim[j]);
			strcpy(namamin, nama[j]);
		}
		if(na[j] > maxs){
			maxs = na[j];
			strcpy(NimMax, nim[j]);
			strcpy(namamax, nama[j]);
		}			
	}
	
	cout<<"Rata-rata nilai akhir = "<<rata2<<endl;
	cout<<"Mahasiswa dengan nilai akhir tertinggi = \n";
	cout<<"NIM: "<<NimMax<<" dengan Nama: "<<namamax<<" dan Nilai Akhir: "<<maxs<<endl;
	cout<<"NIM: "<<NimMin<<" dengan Nama: "<<namamin<<" dan Nilai Akhir: "<<mins<<endl;
	
	//logic error
	/* 
	Ketika program dijalankan dan nilai sudah di input,
	nilai yang ditampilkan adalah 2 nilai pertama yang diinput.
	padahal seharusnya yang ditampilkan itu adalah nilai akhir yang terkecil dan yang terbesar.
	*/
	
	return 0;
}
