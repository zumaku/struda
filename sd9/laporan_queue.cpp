// LAPORAN 7 - QUEUE
/*
Untuk contoh di atas, modifikasi program tersebut sehingga panjang antriannya dapat dibatasi,
agar proses memasukkan elemen ke dalam antrian (Queue) dibatasi sesuai dengan panjang antrian.
*/

#include <iostream>
#include <stdlib.h>

#define max 10
using namespace std;


void insert (int queue[],int *rear,int nilai);
void del (int queue[],int *front, int rear, int *nilai);

int main(){
	system("CLS");
	int queue[max];
	int front, rear;
	int n, nilai, batas;
	
	front = rear = (-1);
	cout<<"Masukkan Batas Queue : ";
	cin>>batas; cout<<endl;

	for(int i=1; i<=batas; i++){
		cout<<"Masukkan nilai elemen ke-"<<i<<" : ";
		cin>>nilai;
		insert(queue,&rear,nilai);
	}
	
	cout<<endl;
	cout<<"Tekan 1 untuk menghapus sebuah elemen : ";
	cin>>n;
	
	while (n == 1){
		del(queue, &front, rear, &nilai);
		cout<<"Nilai ini = "<<nilai<<" telah dihapus "<<endl;
		cout<<endl;
		cout<<"Tekan 1 untuk menghapus sebuah elemen : ";
		cin>>n;
	}
}

void insert (int queue[],int *rear,int nilai){
	if(*rear < max-1){
		*rear = *rear+1;
		queue[*rear] = nilai;
	} else {
		cout<<"Queue penuh, insert tidak dapat dilakukan!";
		exit(0);
	}
}

void del(int queue[],int *front,int rear, int *nilai){
	if(*front == rear){
		cout<<"Queue kosong, delete tidak dapat dilakukan\n\n";
		exit(0);
	}
	*front = *front + 1;
	*nilai = queue[*front];
}