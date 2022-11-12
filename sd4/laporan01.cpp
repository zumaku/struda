// Laporan 3 - bagian 1
/*
Ubahlah program pada latihan 2, ciptakan fungsi untuk menginput data mahasiswa,
fungsi pencarian data mahasiswa dengan NilaiAkhir tertinggi dan terendah,
fungsi pencarian rata-rata NilaiAkhir serta fungsi untuk menampilkan hasil pencarian.
Gunakan parameter untuk setiap fungsi yang diciptakan.
*/

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string.h>
using namespace std;


// deklarasi dan inisialisasi variabel global
int nim[100];
int na[100];
string nama[100];

int NimMin, NimMax;
int mins, maxs;
string namamin, namamax;

float rata2;
int i=0;
int jumlah = 0;


// fungsi input data mahasiswa
void inputData(int nimku, string namaku, int naku){
    nim[i] = nimku;
    nama[i] = namaku;
    na[i] = naku;
	jumlah += na[i];
    i++;
}


// fungsi pencarian data tertinggi dan terendah
void cariMaxMin(int batas){
	// menetapkan nilai awal min dan max
	maxs = na[0];
	NimMax = nim[0];
	namamax = nama[0];

	mins = na[0];
	NimMin = nim[0];
	namamin = nama[0];

	// menyeleksi nilai minimal dan maksimal
	for(int j=0; j<batas; j++){
		if(na[j] < mins){
			mins = na[j];
			namamin = nama[j];
			NimMin = nim[j];
		}
		if(na[j] > maxs){
			maxs = na[j];
			namamax = nama[j];
			NimMin = nim[j];
		}
	}
}


// fungsi mencari rata-rata nilai
void mean(int totalData, int bnykData){
	rata2 = totalData/bnykData;
}


// fungsi menampilkan data
void tampil(string posisi, int nimku, string namaku, int nilaiku){
	cout<<"Mahasiswa dengan Nilai Akhir "<<posisi<<endl;
	cout<<"Nim\t\t:"<<nimku<<endl;
	cout<<"Nama\t\t:"<<namaku<<endl;
	cout<<"Nilai Akhir\t:"<<nilaiku<<endl<<endl;
}


// fungsi utama
int main(){

	// pengisian data 
    inputData(101, "Fadli", 89);
    inputData(120, "Husna", 99);
    inputData(132, "Tulla", 90);
	inputData(321, "Baso", 56);

	// pencarian nilai minimal dan makaimal
    cariMaxMin(i);

	// menacri rata-rata
	mean(jumlah, i);

	system("CLS");

	// menampilkan nilai tertinggi dan terendah
    tampil("Tertinggi", NimMax, namamax, maxs);
    tampil("Terendah", NimMin, namamin, mins);

	// menampilkan rata-rata
	cout<<"Rata-rata nilai\t:"<<rata2;

	return 0;
}