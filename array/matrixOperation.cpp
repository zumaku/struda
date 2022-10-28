#include <iostream>
#include <iomanip>
#include <unistd.h>

using namespace std;

void pilihan();

//fungsi cetak
void cetak(int nilaiMatriks){
    cout<<setw(5)<<nilaiMatriks;
}



// Fungsi Pengimputan Elemen Matriks
void pengimputan(int x, int y, int z){
    if(z==1){
        // input nilai
        int matriks[x][y];
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                printf("Elemen %i, %i : ", i+1, j+1);
                cin>>matriks[i][j];
            }
        }

        // Operasi ScaleBy
        int skalar;
        cout<<"\nMasukkan Nilai Skalar : ";
        cin>>skalar;

        // Cetak Matriks
        cout<<"\nHasil : \n\n";
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                cetak(matriks[i][j]*skalar);
            }
            cout<<"\n\n";
        }
    }
    else if(z==2){
        // input nilai
        int matriks[x][y];
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                printf("Elemen %i, %i : ", i+1, j+1);
                cin>>matriks[i][j];
            }
        }

        // Operasi Transfose dan Mencetak Matriks sekaligus
        cout<<"\nHasil : \n\n";
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                cetak(matriks[j][i]);
            }
            cout<<"\n\n";
        }
    }
    else if(z==3){
        // input nilai matriks A
        cout<<"\nMasukkan Ordo dan Elemen Matriks A : \n";
        int matriksA[x][y];
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                printf("Elemen %i, %i : ", i+1, j+1);
                cin>>matriksA[i][j];
            }
        }

        // input nilai matriks B
        cout<<"\nMasukkan Ordo dan Elemen Matriks B : \n";
        int matriksB[x][y];
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                printf("Elemen %i, %i : ", i+1, j+1);
                cin>>matriksB[i][j];
            }
        }

        // cetak matriks C
        cout<<"\nMatriks A + Matriks B : \n";
        int matriksC[x][y];
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                matriksC[i][j] = matriksA[i][j] + matriksB[i][j];
                cetak(matriksC[i][j]);
            }
            cout<<"\n\n";
        }
    }
    else if(z==4){
        // input nilai matriks A
        cout<<"\nMasukkan Ordo dan Elemen Matriks A : \n";
        int matriksA[x][y];
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                printf("Elemen %i, %i : ", i+1, j+1);
                cin>>matriksA[i][j];
            }
        }

        // input nilai matriks B
        cout<<"\nMasukkan Ordo dan Elemen Matriks B : \n";
        int matriksB[x][y];
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                printf("Elemen %i, %i : ", i+1, j+1);
                cin>>matriksB[i][j];
            }
        }

        // cetak matriks C
        cout<<"\nMatriks A - Matriks B : \n";
        int matriksC[x][y];
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                matriksC[i][j] = matriksA[i][j] - matriksB[i][j];
                cetak(matriksC[i][j]);
            }
            cout<<"\n\n";
        }
    }
    else if(z==5){
        // input nilai matriks A
        cout<<"\nMasukkan Ordo dan Elemen Matriks A : \n";
        int matriksA[x][y];
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                printf("Elemen %i, %i : ", i+1, j+1);
                cin>>matriksA[i][j];
            }
        }

        // input nilai matriks B
        cout<<"\nMasukkan Ordo dan Elemen Matriks B : \n";
        int matriksB[y][x];
        for(int i=0; i<y; i++){
            for(int j=0; j<x; j++){
                printf("Elemen %i, %i : ", i+1, j+1);
                cin>>matriksB[i][j];
            }
        }

        // inisialisasi isi matriksC = 0
        int matriksC[x][x];
        for(int i=0; i<x; i++){
            for(int j=0; j<x; j++){
                matriksC[i][j]=0;
            }
        }

        // operasi Multiplay
        for(int i=0; i<x; i++){
            for(int j=0; j<x; j++){
                for(int k=0; k<y; k++){
                    matriksC[i][j] += matriksA[i][k] * matriksB[k][j];
                }
            }
        }

        // cetak matriks
        cout<<"\nMatriks A * Matriks B : \n";
        for(int i=0; i<x; i++){
            for(int j=0; j<x; j++){
                cetak(matriksC[i][j]);
            }
            cout<<"\n\n";
        }
    }

    cout<<"Operasi Selesai!\n";
    cout<<"Anda dapat melakukan operasi lain dalam beberapa detik!\n\n";
    sleep(5);
    pilihan();
}



// Fungsi Penentuan Ordo Matriks
void ordo(int x){
    int row, col, ygDipilih = x;

    if(ygDipilih == 3 | ygDipilih == 4){
        cout<<"Masukkan Jumlah Baris dan Kolom: ";cin>>row;
        col = row;
        pengimputan(row, col, ygDipilih);
    }
    else{
        cout<<"Masukkan Jumlah Baris: ";cin>>row;
        cout<<"Masukkan Jumlah Kolom: ";cin>>col;
        cout<<"\nMasukkan Elemen Matriks:\n";
        pengimputan(row, col, ygDipilih);
    }
}



// Fungsi Jika Inputan Salah
void inputanSalah(){
    cout<<"Inputan yang anda masukkan salah!\n";
    cout<<"Silahkan Pilih Operasi yang telah disediakan!\n\n";
    sleep(5);
    pilihan();
}



// Fungsi Pemilihan Operassi Pada Matriks
void pilihan(){
    int pilihan;

    cout<<"\nPilih Operasi Matriks\n";
    cout<<"---------------------\n";
    cout<<"1. ScaleBy\n";
    cout<<"2. Transpose\n";
    cout<<"3. Add\n";
    cout<<"4. Substract\n";
    cout<<"5. Multiply\n";
    cout<<"6. Exit\n";
    cout<<"---------------------\n";
    cout<<"Masukkan Pilihan: ";
    cin>>pilihan;
    cout<<"\n";

    if(pilihan == 1){
        cout<<"Operasi ScaleBy : \n";
        ordo(1);
    } else if(pilihan == 2){
        cout<<"Operasi Transpose : \n";
        ordo(2);
    } else if(pilihan == 3){
        cout<<"Operasi Add : \n";
        ordo(3);
    } else if(pilihan == 4){
        cout<<"Operasi Substract : \n";
        ordo(4);
    } else if(pilihan == 5){
        cout<<"Operasi Multiply : \n";
        ordo(5);
    } else if(pilihan == 6){
        cout<<"Program Selesai!";
    } else{
        inputanSalah();
    }
}



// Fungsi Utama
int main(){

    pilihan();

    return 0;
}
