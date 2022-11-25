#include <iostream>
using namespace std;

void nilai(int *p){
    cout<<"Alamat Parameter: "<<&p<<endl;
    cout<<"Alamat Yang Diterima Parameter: "<<p<<endl;
    cout<<"Nilai Dari Alamat Yang Diterima Parameter: "<<*p<<endl;
}

int main(){
    int x = 6;
    nilai(&x);

    return 0;
}