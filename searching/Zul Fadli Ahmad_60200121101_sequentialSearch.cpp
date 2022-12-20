#include <iostream>
using namespace std;

void cetak(short data[], short jum){
    for(short i=0; i<jum; i++){
        cout<<data[i]<<" ";
    } cout<<endl;
}

main(){
    short A[] = {49, 15, 69, 76, 35, 11, 58, 20, 70, 23}, x, i;
    cout<<"Elemen set data A : "; cetak(A, 10);
    cout<<"\nMasukkan data yang dicari : "; cin>>x;

    for(i=0; i<10; i++){
        if(x == A[i]){
            cout<<"Data ditemukan pada posisi ke : ";
            cout<<(i+1)<<endl;
            break;
        }
    }

    if(i==10)   cout<<"Data tidak ditemukan !!!"<<endl;
}