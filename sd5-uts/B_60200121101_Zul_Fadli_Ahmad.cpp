// Zul Fadli Ahmad
// 60200121101
// Kelas B
// UTS

#include <iostream>
#include <string.h>
using namespace std;

// struct adress
struct adress{
    string provinsi;
    string kabupaten;
    string kecamatan;
};

// struct mahasiswa
struct mahasiswa{
    string nama;
    string nim;
    int umur;
    adress alamat;
};

// fungsi menampilkan data
void showMahasiswa(mahasiswa mhs){
    cout<<"Data Mahasiswa\n";
    cout<<"==============\n";
    cout<<"Nama: "<<mhs.nama<<endl;
    cout<<"NIM: "<<mhs.nim<<endl;
    cout<<"Umur: "<<mhs.umur<<endl;
    cout<<"Provinsi: "<<mhs.alamat.provinsi<<endl;
    cout<<"Kabupaten: "<<mhs.alamat.kabupaten<<endl;
    cout<<"Kecamatan: "<<mhs.alamat.kecamatan<<endl;
}

// fungsi timesMatrix
void timesMatrix(int matrix1, int matrix2){
    int matrixHasil;
    matrixHasil = matrix1 * matrix2;
    cout<<matrixHasil<<" ";
}

int main(){

    // mengisi data struct
    mahasiswa mhs1;
    mhs1.nama = "Zul Fadli Ahmad";
    mhs1.nim = "60200121101";
    mhs1.umur = 19;
    mhs1.alamat.provinsi = "Sulawesi Selatan";
    mhs1.alamat.kabupaten = "Kep. Selayar";
    mhs1.alamat.kecamatan = "Bontomatene";

    // memanggi fungsi data
    cout<<endl;
    showMahasiswa(mhs1);

    // isi nilai matrix
    int matrix1[2][2] = {{1, 2}, {2, 4}};
    int matrix2[2][2] = {{2, 4}, {3, 2}};
    cout<<endl;

    // memanggil fungsi perkalian matrix
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            timesMatrix(matrix1[i][j], matrix2[i][j]);
        }
        cout<<endl;
    }

    return 0;
}