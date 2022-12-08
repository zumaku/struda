// LAPORAN PRAKTIKUM 5
/*
1. Buat program untuk menginput data bilangan bulat sebara acak, kemudian masukkan data tersebut kedalam sebuah linked list dengan berurut secara ascending (misalnya data yang diinput: 4, 8, 2, 9, 5, 6. Maka hasil setelah dimasukkan ke dalam lingked list adalah: 2 4 5 6  8 9).
2. Untuk soal nomer 1 diatas, setelah selesai dilakukan kemudian hapus semua data bilangan yang genap saja sehingga isi dari lingked list hanya data bilangan bulat yang ganjil saja (misalnya contoh diatas maka isi terakhir dari lingked list adalah: 5 dan 9).
*/

#include <iostream>
using namespace std;

struct Angka{
    int angka;
    Angka *next;
};

Angka *current, *head, *tail = NULL, *newnode;
int i = 1, n;


// untuk pembuatan node
void buatNode(int n){
    head = new Angka();
    head->angka = n;
    head->next = tail;
    if(head->next == NULL){
        // Kondisi ini hanya terjadi sekali, yaitu pada saat elemen pertama, tujuannya agar data yang menunjuk ke NULL juga dapat di sorting. Angka pada elemen pertama akan di simpan ke node baru yang menunjuk ke head.
        newnode = new Angka();
        newnode->angka =  head->angka;
        newnode->next = head;
        tail = newnode;
    } else{
        // Setelah elemen pertama terisi, maka sisanya hanya akan berjalan normal
        tail = head;
    }
}


// fungsi cetak node
void cetakNode(){
    current = head;
    while(current->next != NULL){
        cout<<current->angka<<" --> ";
        current = current->next;
    }
    if(current->next == NULL){
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

// fungsi menghapus nilai genap
void delGenap(){
    Angka *cur;
    cur = new Angka;
    cur->angka = 1;
    cur->next = head;

    Angka *temp = head;
    Angka *prev = cur;

    if(temp->angka == 0){   // ini untuk membuat node.angka yg isinya 0 (yaitu pada nide pertama(head)) menjadi 2, agar dapat dimodulus 2 pada line berikutnya
        temp->angka = 1;    // Menyetel angka pada node pertama menjadi 1
    }

    // perulangan dibawah ini berhasil, tapi menampilkan hanya yang bernilai genap 
    while(temp->next != NULL){
        if(temp->angka % 2 != 0){
            if(i == 1){
                temp->angka = 0;    // Mengembalikan nilai angka pada node pertama menjadi 0
                i = 0;
            }
            prev = temp;
            temp = temp->next;
        } else{
            prev->next = temp->next;
            delete(temp);
            temp = prev->next;
        }
    }
}


int main(){
    system("CLS");
    int n;

    do{
        cout<<"Masukkan angka [0 = selesai] : ";
        cin>>n;
        buatNode(n);
    } while(n != 0);
    cetakNode();

    sorting();
    cetakNode();

    delGenap();
    cetakNode();

    return 0;
}
