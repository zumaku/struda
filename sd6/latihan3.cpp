#include <iostream>
using namespace std;

struct dtMhs{
    char nim[15];
    char nama[15];
    char alamat[50];
};

int main(){
    int jumlah;
    dtMhs *ptrMhs;

    cout<<"Masukkan Jumlah Mahasiswa : "; cin>>jumlah;

    // Buat variabel dinais berupa array dan ditunjuk oleh ptrMhs
    ptrMhs = new dtMhs[jumlah];

    // Isi data melalui ptrMhs
    for(int j = 0; j < jumlah; j++){
        cout<<"Masukkan data ke "<<j+1<<" : "<<endl;
        cout<<"     Input Nim       : "; cin>>ptrMhs[j].nim;
        cout<<"     Input Nama      : "; cin>>ptrMhs[j].nama;
        cout<<"     Input Alamat    : "; cin>>ptrMhs[j].alamat;
        cout<<endl;
    }

    // Mengakses data melalui ptrMhs
    for(int j = 0; j < jumlah; j++){
        cout<<endl<<"Daftar Mahasiswa data ke "<<j+1<<" : "<<endl;
        cout<<"     Nim       : "<<ptrMhs[j].nim<<endl;
        cout<<"     Nama      : "<<ptrMhs[j].nama<<endl;
        cout<<"     Alamat    : "<<ptrMhs[j].alamat<<endl;
        cout<<endl;
    }

    // Bebaskan memori untuk variable dinamis
    delete [] ptrMhs;           // Fungsi untuk menghapus

    return 0;
}
