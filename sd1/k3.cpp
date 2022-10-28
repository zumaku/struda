#include <iostream>
using namespace std;

int nilai, a=1;
char stb[7], nama[30];

int main(){

    char jawab='y';
    int max=0;

    while(jawab=='y'){
        cout<<"Masukkan data mahasiswa ke "<<a<<endl;
        cout<<"No. Pokok            : "; cin>>stb;
        cout<<"Nama                 : "; cin>>nama;
        cout<<"Nilai akhir (0-100)   : "; cin>>nilai;

        if(nilai>max)
            max=nilai;

        a++;
        cout<<"Masih ada data [y/t] : "; cin>>jawab;
    }
    cout<<"Nilai akhir tertinggi : "<<max;

    return 0;
}