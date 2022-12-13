#include <iostream>
using namespace std;

void bubbleSort(short data[], short jml){
	short temp;
	for(short i=0; i<jml; i++){
		for(short j=i+1; j<=jml; j++){
			if(data[i]>data[j]){
				temp=data[i];
				data[i]=data[j];
				data[j]=temp;
			}
		}
	}
}

void insertionSort(short data[], short jml){
	short temp, k;
	for(short i=1; i<=jml; i++){
		k=i;
		for(short j=i; j>=0; j--){
			if(data[k]<data[j]){
				temp=data[k];
				data[k]=data[j];
				data[j]=temp;
				k=j;
			}
		}
	}
}

void selectionSort(short data[], short jml){
	short temp, k, idx;
	for(short i=0; i<jml; i++){
		k=data[i+1];
		for(short j=i+1; j<=jml; j++){
			if(data[j]<k){
				k=data[j];
				idx=j;
			}
		}
		if(data[i]>data[idx]){
			temp=data[i];
			data[i]=data[idx];
			data[idx]=temp;
		}
	}
}

void quickSort(short data[], short kr, short kn){
	short temp, L=kr, R=kn;
	short pivot = data[kr];
	while(L<=R){
		while(data[L]<pivot){
			L++;
		}
		while(data[R]>pivot){
			R--;
		}
		if(L<=R){
			temp=data[L];
			data[L]=data[R];
			data[R]=temp;
			L++; R++;
		}
	}
	if(kr<R) quickSort(data, kr, R);
	if(L<kn) quickSort(data, L, kn);
}

void cetak(short data[], short jml){
	for(short i=0; i<jml; i++){
		cout<<data[i];
	}
	cout<<endl;
}

void main(){
	short jml;
	cout<<"Masukkan jumlah data : "; cin>>jml;
	short *data = new short[jml];
	cout<<"Masukkan bilangan : \n";
	for(short i=0; i<jml; i++) {
		cout<<" ke- "<<(i+1)<<" : ";
		cin>>data[i];
	}
	cout<<"\nKeadaan Acak : "; cetak(data, jml);
	// bubbleSort(data, jml-1);
	// insertionSort(data, jml-1);
	// selectionSort(data, jml-1);
	// untuk pemanggilan fungsi quck sortnya masih bingung ka
	// quickSort(data, jml-1, jml-1);
	cout<<"\Keadaan Urut : "; cetak(data, jml);
}
