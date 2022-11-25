#include <iostream>
using namespace std;

struct rekamanBuku{
    char judul[30];
    char pengarang[30];
    int jumlah;
};

int main(){
    rekamanBuku *ptrBuku, buku;

    // Isi data buku
    cout<<"Input Judul Buku : "; cin>>buku.judul;
    cout<<"Input Pengarang Buku : "; cin>>buku.pengarang;
    cout<<"Input Stok Buku : "; cin>>buku.jumlah;
    cout<<endl;

    // Variabel ptrBuku diatur menunjuk ke variabel buku
    ptrBuku = &buku;

    // Mengakses data melalui variabel ptrBuku
    cout<<"Judul        : "<<ptrBuku->judul<<endl;
    cout<<"Pengarang    : "<<ptrBuku->pengarang<<endl;
    cout<<"Jumlah       : "<<ptrBuku->jumlah<<endl;

    return 0;
}
