// Laporan 3 - bagian 2
// Dibuat oleh Zul Fadli Ahmad

/*
Buat program untuk menghitung total pembayaran rekening dengan proses sebagai berikut:
- Datamasukan: No. Rekening, Nama, Alamat, Golongan Meter (A, B, C), Nilai Penunjuk Meter Awal dan Nilai Penunjuk Meter Akhir.
- Biaya beban dan tarif diperoleh dari golongan meter sebagai berikut:
    Golongan Meter       Biaya Beban          Tarif
        A                Rp. 10.000         Rp. 500
        B                Rp. 15.000         Rp. 750
        C                Rp. 20.000         Rp. 1.000
- Jumlah pemakaian = Penunjukan Meter Akhir - Penunjukan Meter Awal
- Biaya pemakaian diperoleh dari Jumlah Pemakaian * Tarif
- Total pembayaran diperoleh dari Biaya Pemakaian + Biaya Beban

Alur Program
- Pengimputa dilakukan untuk beberapa data pelanggan. Penginputan dihentikan jika No. Rekening diinput 0 (nol).
- Validasi penginputan sebagai berikut:
    - Golongan Meter  -->  A/B/C
    - Penunjukan Meter Akhir >= Penunjukan Meter Awal 
- Hasil perhitungan Tottal pembayawan ditampilkan pada setiap data yang siinput.
- Setelah penginputan berakhir, lakukan rekapitulasi (diluar loop penginputan data pelanggan) terhadap data pelanggan untuk memperoleh output berikut:
    - Jumlah pelanggan untuk masing-masing golongan meter.
    - Total jumlah pemakaian pada stiap golongan meter.
    - Data pelanggan (cetak No. Rekening, nama, Jumlah Pemakaian,) dengan jumlah pemakaian pada rentan 10 s/d 50, dan hitung Grand Total pembayarannya.
*/


#include <iostream>
#include <string.h>
using namespace std;


// deklarasi variabel
int norek[50], npmAwal[50], npmAkhir[50];
string nama[50], alamat[50];
char golmet[50];

int jmlPemakai[50], bp[50], tp[50];
int gtp;
int jmlPelA = 0, jmlPelB = 0, jmlPelC = 0;
int tjpA = 0, tjpB = 0, tjpC = 0;
int i = 0, j = 0;

int bbA = 10000, bbB = 15000, bbC = 20000;
int tarifA = 500, tarifB = 750, tarifC = 1000;


// fungsi input golongan meter
void inputGolmet(int index){
    cout<<"Masukkan Golongan Meter [A, B, C]\t: "; cin>>golmet[i];                  // Menginput golongan meter
    if(golmet[index] == 'A') jmlPelA++;                                             // Pengecekan golongan meter untuk mengincrementkan jumlah pelanggan
    else if(golmet[index] == 'B') jmlPelB++;    
    else if(golmet[index] == 'C') jmlPelC++;
    else{                                                                           // Apabila inputan selain A, B atau C
        cout<<"PERINGATAN!!! Golongan Meter yang anda masukkan salah. Silahkan masukkan huruf 'A', 'B' atau 'C'.\n";
        inputGolmet(index);                                                         // Rekursif. Memaggil dirinya sendiri.
    }
}


// fungsi input golongan meter
void inputNPM(int index){
    cout<<"Masukkan Nilai Penunjukan Meter Awal\t: "; cin>>npmAwal[index];          // Memasukkan nilai penunjuk meter awal
    cout<<"Masukkan Nilai Penunjukan Meter Akhir\t: "; cin>>npmAkhir[index];        // Memasukkan nilai penunjuk meter akhir
    if(npmAkhir < npmAwal){                                                         // Apabila inputan npmAkhir lebih kecil dari npmAwal
        cout<<"PERINGATAN!!! Pastikan anda mengisi Nilai Penunjukan Akhir lebih besar dari Nilai Penunjukan Awal.\n";
        inputNPM(index);
    }
}


// fungsi inputan
void inputData(){
    cout<<"PEMBAYARAN KE-"<<i+1<<endl;
    cout<<"Masukkan No. Rekening [0 = exit]\t: ";
    cin>>norek[i];                                                                  // Menginput nomer rekening
    
    while (norek[i] != 0){
        cout<<"Masukkan Nama\t\t\t\t: "; cin>>nama[i];                              // Menginput nama
        cout<<"Masukkan Alamat\t\t\t\t: "; cin>>alamat[i];                          // Menginput alamat
        inputGolmet(i);                                                             // Pemanggilan fungsi untuk menginput golongan meter
        inputNPM(i);                                                                // Pemanggilan fungsi untuk menginput nilai penunjuk meter awal dan akhir
        jmlPemakai[i] = npmAkhir[i] - npmAwal[i];                                   // Penentukan jumlah pemakai

        if(golmet[i] == 'A'){                                                       // Pengkondisian untuk menentukan berikut ini:
            tjpA += jmlPemakai[i];                                                  // 1. Total jumlah pemakai setiap golongan
            bp[i] = jmlPemakai[i] * tarifA;                                         // 2. Biaya pemakaian
            tp[i] = bp[i] + bbA;                                                    // 3. Total Pembayaran
        } else if(golmet[i] == 'B'){
            tjpB += jmlPemakai[i];
            bp[i] = jmlPemakai[i] * tarifB;
            tp[i] = bp[i] + bbB;
        } else{
            tjpC += jmlPemakai[i];
            bp[i] = jmlPemakai[i] * tarifC;
            tp[i] = bp[i] + bbC;
        }

        cout<<"Total Pembayaran adalah\t\t\t: Rp."<<tp[i]<<endl<<endl;              // Menampilkan total pembayaran
        gtp += tp[i];                                                               // Menambahkan jumlah Grand Total Pembayaran dari totdal sebelumnya
        i++;                                                                        // Increment i
        inputData();                                                                // Rekursif. Memanggil kembali untuk input data selanjutnya
    }
}


//fungsi menampilkan data
void displayData(int index){
    cout<<"\n\n========= Data Pelanggan Dengan Pemakaian 10 -50 =========\n\n";
    while(j <= index){                                                              // Perulangan selama j masih lebih kecil atau sama dengan nilai indexnya
        if(jmlPemakai[j] > 10 && jmlPemakai[j] < 50){                               // Penyeleksian untuk jumlah pemakaian di rentan 10 s/d 50
            cout<<"PELANGGAN KE-"<<j+1<<endl;                             
            cout<<"No. Rekening\t\t\t\t: "<<norek[j]<<endl;                         // Menampilkan nomer rekening
            cout<<"Nama\t\t\t\t\t: "<<nama[j]<<endl;                                // Menampilkan Nama
            cout<<"Alamat\t\t\t\t\t: "<<alamat[j]<<endl;                            // Menampilkan Alamatnya
            cout<<"Jumlah Pemakaian\t\t\t: "<<jmlPemakai[j]<<endl<<endl;            // Menampilkan Jumlah pemakaiannya
        }
        j++;                                                                        // Increment j
    }
    cout<<"\n==> Grand Total Pembayaran adalah\t: Rp."<<gtp<<endl<<endl;;
}


// fungsi utama
int main(){
    system("CLS");                                                                  // Membersihkan layar saat program dijalankan
    cout<<"====== PROGRAM MENGHITUNG TOTAL PEMBAYARAN REKENING ======\n\n";
    inputData();                                                                    // Memanggil fungsi input data
    displayData(i);                                                                 // Memanggil fungsi menginput data
}



// PR
/*
1. Masih ada yang salah dengan Logikanya. Total Pembayaran tidak tanpil.            ==> Done
2. Buat fungsi menampilkan datanya.                                                 ==> Done
3. Perbaiki kekeliruan dalam menampilkan datanya. Baca kembali soalnya.             ==> Not Done
*/
