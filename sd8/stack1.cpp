#include <iostream>
#include <conio.h>
#include <string.h>
#include <iomanip>

using namespace std;

struct stack{
    int top;
    char isi[10];
};

stack s;

void init(){ s.top = -1; }

void push(char x){
    s.top++;
    s.isi[s.top] = x;
}

void pop(char &x){
    x = s.isi[s.top];
    s.top--;
}

char huruf;

int main(){
    system("CLS");

    init();
    cout<<"Contoh Aplikasi Stack:\n";
    cout<<"Masukkan sebuah karakter ($ = selesai) : ";
    cin>>huruf;

    while(huruf != '$'){
        push(huruf);
        cout<<"Masukkan sebuah karakter ($ = selesai) : ";
        cin>>huruf;
    }
    cout<<"\nisi dari stack setelah di pop : ";
    do{
        pop(huruf);
        cout<<setw(4)<<huruf;
        getch();
    } while(s.top != -1);

    return 0;
}
