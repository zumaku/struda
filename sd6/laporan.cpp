//Laporan 4
/*
Kerjakan Kegiatan 3.

Tugas Laporan.
Berdasarkan contoh program kegiatan 3 diatas, buat program untuk mencari nilai minimum dan maksimum dari suatu arrau dinamis yang bertipe inetger serta menghitung rata-rata dari nilai yang diinput tersebut.
*/

#include <iostream>
using namespace std;

struct dtMhs{
    string nim;
    string nama;
    string alamat;
    int nilai = 0;
};   // Mendeklarasikan variabel pointer dengan mahasiswa yang nilainya tertinggi dan terendah.


int main(){
    // Mendeklarasikan variabel untuk menyimpan jumlah mahasiswa dan nilai rata-rata
    int jumlah, rata2 = 0;
    dtMhs *ptrMhs, mhsMax, mhsMin;

    cout<<"Masukkan Jumlah Mahasiswa : "; cin>>jumlah;

    // Buat variabel dinais berupa array dan ditunjuk oleh ptrMhs
    ptrMhs = new dtMhs[jumlah];

    // Isi data melalui ptrMhs
    for(int j = 0; j < jumlah; j++){
        cout<<"Masukkan data ke "<<j+1<<" : "<<endl;
        cout<<"     Input Nim       : "; cin>>ptrMhs[j].nim;
        cout<<"     Input Nama      : "; cin>>ptrMhs[j].nama;
        cout<<"     Input Alamat    : "; cin>>ptrMhs[j].alamat;
        cout<<"     Nilai           : "; cin>>ptrMhs[j].nilai;
        
        // Penyeleksian nilai minimal dan maksimal
        if(j == 0){
            mhsMax.nilai = ptrMhs[j].nilai;
            mhsMin.nilai = ptrMhs[j].nilai;
        } 
        if(ptrMhs[j].nilai >= mhsMax.nilai){
            mhsMax.nim = ptrMhs[j].nim;
            mhsMax.nama = ptrMhs[j].nama;
            mhsMax.alamat = ptrMhs[j].alamat;
            mhsMax.nilai = ptrMhs[j].nilai;
        }
        if(ptrMhs[j].nilai <= mhsMin.nilai){
            mhsMin.nim = ptrMhs[j].nim;
            mhsMin.nama = ptrMhs[j].nama;
            mhsMin.alamat = ptrMhs[j].alamat;
            mhsMin.nilai = ptrMhs[j].nilai;
        }

        // Akumulasi nilai
        rata2 += ptrMhs[j].nilai;
        cout<<endl;
    }

    // Mengakses data melalui ptrMhs
    for(int j = 0; j < jumlah; j++){
        cout<<endl<<"Daftar Mahasiswa data ke "<<j+1<<" : "<<endl;
        cout<<"     Nim       : "<<ptrMhs[j].nim<<endl;
        cout<<"     Nama      : "<<ptrMhs[j].nama<<endl;
        cout<<"     Alamat    : "<<ptrMhs[j].alamat<<endl;
        cout<<"     Nilai     : "<<ptrMhs[j].nilai<<endl;
        cout<<endl;
    }

    // Menampilkan nilai maksimal dan minimal
    cout<<endl<<"Mahasiswa dengan nilai tertinggi :"<<endl;
    cout<<"     Nim       : "<<mhsMax.nim<<endl;
    cout<<"     Nama      : "<<mhsMax.nama<<endl;
    cout<<"     Alamat    : "<<mhsMax.alamat<<endl;
    cout<<"     Nilai     : "<<mhsMax.nilai<<endl;
    cout<<endl;

    cout<<endl<<"Mahasiswa dengan nilai terendah :"<<endl;
    cout<<"     Nim       : "<<mhsMin.nim<<endl;
    cout<<"     Nama      : "<<mhsMin.nama<<endl;
    cout<<"     Alamat    : "<<mhsMin.alamat<<endl;
    cout<<"     Nilai     : "<<mhsMin.nilai<<enl;
    cout<<endl;

    rata2 = rata2/2;
    cout<<"Nilai rata-rata : "<<rata2<<endl;

    // Bebaskan memori untuk variable dinamis
    delete [] ptrMhs;           // Fungsi untuk menghapus

    return 0;
}
