/*
LAPORAN 6 - STACK
PROGRAM MENCARI NILAI PRIMA MENGGUNAKAN STACK

Buatlah program dengan menggunak stack untuk mencari bilangan prima dari 2 s.d. n,
dimana n adalah bilangan bulat positif yang diinput melalui keyboard.
*/

#include <iostream>
using namespace std;

int n, top = 0;
int bil[100];

void push(int x){
    if(top >= n){
        cout<<"Data Penuh!"<<endl;
    } else{
        bil[top] = x;
        top++;
    }
}

void displayPrima(){
    int temp;
    cout<<"Data Bilangan Prima dari 2 s.d. "<<n<<" : "<<endl;
    for(int i = n - 1; i >= 0; i--){
        temp = 0;
        for(int j = 1; j <=i; j++){
            if(i % j == 0){ temp+=1; }
        }
        if(temp == 2){ cout<<i<<" "; }
    }
}

int main(){
    system("CLS");
    cout<<"Masukkan banyak data : ";
    cin>>n;

    for(int i = 1; i <= n; i++){ push(i); }
    displayPrima();

    return 0;
}