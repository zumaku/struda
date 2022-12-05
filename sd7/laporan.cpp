#include <iostream>
using namespace std;

struct Angka{
    int angka;
    Angka *next;
};

Angka *current, *head, *tail = NULL, *newnode;
int i = 1, n;

// void buatNode(int n){
//     head = new Angka();
//     head->angka = n;

//     if(i == 1){ head->next = NULL; }
//     else{ head->next = tail; }

//     tail = head;
//     i++;
// }

// untuk pembuatan node awal, sekaligus menjadi tail
void buatNode(int n){
    head = new Angka();
    head->angka = n;
    head->next = tail;
    tail = head;
}

// fungsi cetak node
void cetakNode(){
    // current = tail;
    current = head;
    while(current != NULL){
        cout<<current->angka<<" --> ";
        current = current->next;
    }
    if(current == NULL){
        cout<<"NULL"<<endl;
    }
}

// fungsi sorting
void sorting(){
    Angka *i, *j;
    int temp;

    for(i=head; i->next != NULL; i = i->next){
        for(j=i->next; j->next != NULL; j = j->next){
            if(i->angka > j->angka){
                temp = i->angka;
                i->angka = j->angka;
                j->angka = temp;
            }
        }
    }
}




int main(){
    system("CLS");
    int n;

    // cout<<"Masukkan angka: ";
    // cin>>n;
    // buatNode(n);
    do{
        cout<<"Masukkan angka: ";
        cin>>n;
        // tambahNode(n);
        buatNode(n);
    } while(n != 0);
    cetakNode();

    sorting();
    cetakNode();

    return 0;
}