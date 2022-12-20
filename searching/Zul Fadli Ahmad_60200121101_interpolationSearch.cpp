#include <iostream>
using namespace std;

void cetak(short data[], short jum){
    for(short i=0; i<jum; i++){
        cout<<data[i]<<" ";
    } cout<<endl;
}

main(){
    short A[] = {11, 15, 20, 23, 35, 49, 58, 69, 70, 76}, x, i, awal, akhir, posisi;
    cout<<"Elemen set data A : "; cetak(A, 10);
    cout<<"\nMasukkan data yang dicari : "; cin>>x;

    awal = 0; akhir = 9;
    while(awal <= akhir){
        posisi = awal + (x - A[awal]) / (A[akhir] - A[awal]) * (akhir - awal);
        if(A[posisi] == x){
            cout<<"Data ditemukan pada posisi ke : ";
            cout<<(posisi+1);
            break;
        }
        else if(A[posisi] < x)  awal = posisi+1;
        else if(A[posisi] > x)  akhir = posisi-1;
    }

    if(awal > akhir)    cout<<"Data tidak ditemukan !!!"<<endl;
}