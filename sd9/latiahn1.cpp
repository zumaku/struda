#include <iostream>
#include <stdlib.h>

#define max 10
using namespace std;


void insert (int queue[],int *rear,int nilai);
void del (int queue[],int *front, int rear, int *nilai);

int main(){
	int queue[max];
	int front,rear;
	int n,nilai;
	
	front = rear = (-1);
	do{
		cout<<"Masukkan nilai elemen (0 = selesai) : ";
		cin>>nilai;
		do{
			insert(queue,&rear,nilai);
			cout<<"Masukkan nilai elemen (0 = selesai) : ";
			cin>>nilai;
		
	} while (nilai !=0);
	
	cout<<endl;
	cout<<"Tekan 1 untuk menghapus sebuah elemen : ";
	cin>>n;
	
	while (n==1){
		del(queue,&front,rear,&nilai);
		cout<<"Nilai ini = "<<nilai<<" telah dihapus "<<endl;
		cout<<endl;
		cout<<"Tekan 1 untuk menghapus sebuah elemen : ";
		cin>>n;
	}
	cout<<endl;
	cout<<"Tekan 1 untuk menghapus elemen baru : ";
	cin>>n;
}while(n==1);
}

void insert (int queue[],int *rear,int nilai){
	if(*rear < max-1){
		*rear = *rear+1;
		queue[*rear] = nilai;
	} else {
		cout<<"queue penuh, insert tidak dapat dilakukan"<<endl;
		exit(0);
	}
}

void del(int queue[],int *front,int rear, int *nilai){
	if(*front == rear){
		cout<<"queue kosong, delete tidak dapat dilakukan"<<endl;
		exit(0);
	}
	*front = *front + 1;
	*nilai = queue[*front];
}