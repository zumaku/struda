#include <iostream>
#include <conio.h>
using namespace std;

struct tglLahir{
    int tgl, thn;
    char bln[15];
};

struct DataMhs{
    char nim[10];
    char nama[30];
    int umur, nt, nm, nf;
    float na;
    tglLahir lahir;
} mhs;


// Tipe data stucture dapat dikirim melalui parameter dan menjadi argumen dari sebuah fungsi.
void infoMhs(DataMhs mhs){
    cout<<"\n======================\n";
    cout<<"Nama: "<<mhs.nama<<endl;
    cout<<"NIM: "<<mhs.nim<<endl;
    cout<<"Umur: "<<mhs.umur<<endl;
    cout<<"Nilai Akhir: "<<mhs.na<<endl;
    cout<<"Tanggal Lahir: "<<mhs.lahir.tgl<<" "<<mhs.lahir.bln<<" "<<mhs.lahir.thn<<endl;
}

int main(){
    
    cout<<"Menghitung Nilai Akhir\n";
    cout<<"Masukkan NIM : "; cin>>mhs.nama;
    cout<<"Masukkan Nama : "; cin>>mhs.nim;
    cout<<"Masukkan Umur : "; cin>>mhs.umur;
    cout<<"Masukkan Nilai Tugas : "; cin>>mhs.nt;
    cout<<"Masukkan Nilai Mid : "; cin>>mhs.nm;
    cout<<"Masukkan Nilai Final : "; cin>>mhs.nf;
    cout<<"Masukkan Tanggal Lahir : "; cin>>mhs.lahir.tgl;
    cout<<"Masukkan Bulan Lahir : "; cin>>mhs.lahir.bln;
    cout<<"Masukkan Tahun Lahir : "; cin>>mhs.lahir.thn;

    mhs.na = (0.25*mhs.nt) + (0.35*mhs.nm) + (0.40*mhs.nf);

    infoMhs(mhs);

    return 0;
}