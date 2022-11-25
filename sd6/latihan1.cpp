#include <iostream>
using namespace std;

// Pointer
// Variabel ini menyimpan alamat memori, namun juga memiliki alamatnya sendiri di memori
/*
    *   = Reference,         untuk menyimpan alamat
    &   = Dereference,       untuk menampilkan alamat variabel
*/

int main(){
    int x;
    int *px;

    x = 2;              // Isi variable x adalah 5
    px = &x;            // Isi variable px adalah nilai yang ada di alamat x

    cout<<"Isi variable x : "<<x<<endl;                             // Akan menampilkan isi variabel x yanng berisi angka 2
    cout<<"Alamat variable memori x : "<<&x<<endl;                  // Akan menampilkan alamat variabel x 
    cout<<"Isi variable px : "<<px<<endl;                           // Akan menampilkan isi variabel px yang berisi alamat dari variabel x
    cout<<"Nilai yang ditunjuk oleh variabel px : "<<*px<<endl;     // Akan menampilkan isi dari alamat yang berada di dalam variabel px
    cout<<"Alamat variable memori px : "<<&px<<endl;                // Akan menampilkan alamat dari variabel px

    return 0;
}