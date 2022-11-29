#include <iostream>
#define maxAntrian 5    // panjang antrian
using namespace std;

struct queue{
    short count, front, rear;
    short isi[maxAntrian]; 
};

// fungsi inisialisasi
void init(queue &q){
    q.front = -1;
    q.rear = -1;
    q.count = 0;
}

// fungsi mengecek apakah queue kosong
short empty(queue q){
    if(q.rear == -1){
        return 1;
    } else{
        return 0;
    }
}

// fungsi mengecek apakah queue full
short full(queue q, short maxQueue){
    if(q.rear == maxQueue - 1){
        return 1;
    } else{
        return 0;
    }
}

// fungsi menambakan data kedalam queue
void enqueue(queue &q, short data){
    if(empty(q)){
        q.front = 0; q.rear = 0;
        q.isi[q.rear] = data;
        q.count++;
    } else{
        if(!full(q, maxAntrian)){
            q.rear++;
            q.isi[q.rear] = data;
            q.count++;
        }
        else{
            cout<<"Antrian telah penuh..!!!"<<endl;
        }
    }
}

// fungsi mengambil data dari queue
void dequeue(queue &q, short &data){
    if(!empty(q)){
        data = q.isi[q.front];
        q.count--;
        for(short i = q.front; i < q.rear; i++){
            q.isi[i] = q.isi[i+1];
        }
        q.rear--;
    }
}

// fungsi cetat
void cetak(queue q){
    cout<<"\tIsi antrian saat ini :       ";
    if(!empty(q)){
        for(short i = q.front; i <= q.rear; i++){
            cout<<q.isi[i]<<" ";
        }
        cout<<endl;
    } else{
        cout<<"Kosong..!!!"<<endl;
        cin.get();
    }
}


// fungsi utama
main(){
    struct queue q;
    short data;
    init(q);

    system("CLS");
    cout<<"Masukkan elemen antrian (0 = selesai) : ";
    cin>>data;

    do{
        enqueue(q, data);
        cetak(q);
        cout<<"\tJumlah elemen dalam antrian : "<<q.count<<endl;
        cout<<"\nMasukkan elemen antrian (0 = selesai) : ";
        cin>>data;
    } while(data != 0);

    cin.get();

    cout<<"\nProses penghapusan antrian: ";
    while(!empty(q)){
        cin.get();
        dequeue(q, data);
        cout<<"\tElemen yang dikeluarkan : "<<data<<endl;
        cetak(q);
        cout<<"\tJumlah elemen dalam antrian : "<<q.count<<endl;
    }
    cout<<"\nProses selesai, Antrian telah kosong..!!!"<<endl;
}
