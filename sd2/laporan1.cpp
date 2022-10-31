#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Masukkan batas = ";
    cin>>n;

    // segitiga 1
    for(int i=0; i<n-n/2+1;i++){
        for(int j=0;j<i; j++){
            if(i==n-n/2){
                break;
            } else{
                cout<<" ";
            }
        }

        // mengatur baris pertama segitiga
        if(i==0){
            for(int k=2*i+1; k<n+1; k++){
                if(k==2*i+1 || k==n){
                    cout<<"*";
                } else{
                    cout<<" ";
                }
            }
        } else{
            for(int k=2*i+1; k<n+1; k++){
                cout<<"*";
            }
        }

        // apabila bukan perulangan terakhi, maka buat baris baru
        if(i!=n-n/2){
            cout<<endl;
        }
    }

    // segitiga 2
    for(int i=1; i<n-n/2; i++){
        for(int k=1; k<n-n/2-i; k++){
            cout<<" ";
        }

        // mengatur baris terakhir segitiga
        if(i==n-n/2-1){
            for(int j=0; j<2*i+1;j++){
                if(j==0 || j==2*i){
                    cout<<"*";
                } else{
                    cout<<" ";
                }
            }
        } else{
            for(int j=0; j<2*i+1;j++){
                cout<<"*";
            }
        }
        cout<<endl;
    }

    return 0;
}