#include <iostream>
using namespace std;

struct mahasiswa{
    int umur;
    mahasiswa *node;
};

int main(){
    
    mahasiswa *kepala;
    mahasiswa *mhs;
    int umur;

    do{
        cout<<"========== BATAS =========="<<endl;
        mhs = new mahasiswa;
        cout<<"mhs\t\t: "       <<mhs<<endl;
        cout<<"mhs->node\t: "   <<mhs->node<<endl;
        cout<<"kepala\t\t: "    <<kepala<<endl;
        
        cout<<"Masukkan Umur Mahasiswa : ";
        cin>>umur;
        cout<<endl;

        mhs->umur = umur;
        mhs->node = kepala;
        kepala = mhs;

        cout<<"mhs\t\t: "       <<mhs<<endl;
        cout<<"mhs->node\t: "   <<mhs->node<<endl;
        cout<<"kepala\t\t: "    <<kepala<<endl<<endl<<endl;
    } while(umur != 0);

    mhs = kepala;
    while(mhs){
        cout<<mhs->umur<<" ";
        mhs = mhs->node;
    }

    return 0;
}