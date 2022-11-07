// Program Total Upah Karyawan Tertinggi dan Terendah
// Oleh Zul Fadli Ahmad

#include <iostream>
#include <string.h>
using namespace std;

// struktur karyawan
struct karyawan{
    string nama;
    // char nama = 'a';
    int golongan;
    int jmlJK;
    int upah;
} karMin, karMax, kar;

// fungsi pengecekan golongan
void gol(){
    if(kar.golongan < 1 || kar.golongan > 3){
        cout<<"xx PERINGATAN!!!\nxx Golongan yang anda masukkan salah.\n";
        cout<<"-> Masukkan Golongan Karyawan [1-3]: "; cin>>kar.golongan;
        gol();
    }
}

// global variable
int i = 1;
char lanjut;
bool n = true;
int total = 0;

// fungsi lanjut mengisi karyawan
void lanjutngk(){
    if(lanjut == 'y'){
        i++;
        n = true;
    } else if(lanjut == 't'){
        cout<<"Pengisian data Selesai!\n";
        n = false;
    } else{
        cout<<"PERINGATAN!!\n Inputan yang anda masukkan salah.\n";
        cout<<"Pilih pilihan yang benar.\nIngin mengisi data lagi? [y/t]: "; cin>>lanjut;
        lanjutngk();
    }
}

// fungsi utama
int main(){
    cout<<"\nProgram Menghitung Upah Karyawan\n";
    cout<<"================================\n";

    while(n == true){
        // input data
        cout<<"\nInfo Karyawan ke-"<<i<<endl;
        // cout<<"-> Masukkan Nama Karyawan: "; getline(cin, kar.nama);
        cout<<"-> Masukkan Nama Karyawan: "; cin>>kar.nama;
        cout<<"-> Masukkan Golongan Karyawan [1-3]: "; cin>>kar.golongan;
        gol();  // pengecekan golongan apakah sesuai ketentuan 1-3
        cout<<"-> Masukkan Jumlah Jam Kerja Karyawan: "; cin>>kar.jmlJK;

        // penentuan upah
        if(kar.golongan == 1){
            kar.upah = 30000;
            if(kar.jmlJK > 8){
                kar.upah += (kar.jmlJK - 8)*3000;
            }
        } else if(kar.golongan == 2){
            kar.upah = 40000;
            if(kar.jmlJK > 8){
                kar.upah += (kar.jmlJK - 8)*4000;
            }
        } else if(kar.golongan == 3){
            kar.upah = 50000;
            if(kar.jmlJK > 8){
                kar.upah += (kar.jmlJK - 8)*5000;
            }
        }
        
        //penjumlahan total upah
        total += kar.upah;

        // penentuan upah tertinggi dan terendah
        if(kar.upah > karMax.upah){
            karMax.nama = kar.nama;
            karMax.golongan = kar.golongan;
            karMax.jmlJK = kar.jmlJK;
            karMax.upah = kar.upah;
        }

        // penetapan nilai awal karMin
        if(i==1){
            karMin.upah = kar.upah;
        }

        //penentuan upah terendah
        if(kar.upah <= karMin.upah){
            karMin.nama = kar.nama;
            karMin.golongan = kar.golongan;
            karMin.jmlJK = kar.jmlJK;
            karMin.upah = kar.upah;
        }

        // Pemilihan masih mau isi data atau tidak
        cout<<"== Data berhasil dimasukkan!\n\nIngin mengisi data lagi? [y/t]: "; cin>>lanjut;
        lanjutngk();
    }

    // menampilkan karyawan dengan nilai tertinggi dan terendah
    cout<<"\n\nKaryawan dengan Upah tertinggi.\n";
    cout<<"Nama: "<<karMax.nama<<endl;
    cout<<"Golongan: "<<karMax.golongan<<endl;
    cout<<"Upah: "<<karMax.upah<<endl;

    cout<<"\nKaryawan dengan Upah terendah.\n";
    cout<<"Nama: "<<karMin.nama<<endl;
     cout<<"Golongan: "<<karMin.golongan<<endl;
    cout<<"Upah: "<<karMin.upah<<endl;
    
    cout<<"\nTotal upah yang dibagikan ke semua karyawan: "<<total;

    cin.get();
    return 0;
}
