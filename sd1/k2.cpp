#include <iostream>
using namespace std;

float bil1, bil2, hasil;
int pilihan;

int main(){

    cout<<"Masukkan bilangan pertama: ";
    cin>>bil1;
    cout<<"Masukkan bilangan kedua: ";
    cin>>bil2;

    cout<<"\nPilihlah operasi berikut ini:\n";
    cout<<"1. Penjumlahan\n";
    cout<<"2. Pengurangan\n";
    cout<<"3. Perkalian\n";
    cout<<"4. Pembagian\n";
    cout<<"5. Sisa pembagian\n";

    cout<<"Masukkan pilihan anada [1..5] : ";
    cin>>pilihan;
    if(pilihan==1)
        hasil=bil1+bil2;
    else if(pilihan==2)
        hasil=bil1+bil2;
    else if(pilihan==3)
        hasil=bil1*bil2;
    else if((pilihan==4)||(pilihan==5)){
        if(bil2==0.0){
            cout<<"Operasi pembagian dibatalkan,\n";
            cout<<"Bilangan kedua=0\n";
            hasil=0.0;
        } else if(pilihan==5)
            hasil = (int)bil1%(int)bil2;
        else
            hasil=bil1/bil2;
    }

    if((pilihan<6)&&(pilihan>0))
        cout<<"Hasil operasi = "<<hasil;

    return 0;
}