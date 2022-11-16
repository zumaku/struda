// Asistensi Laporan 3
/*
1. Buatlah array tiga dimensi dengan variabel matrix[4][2][3]
2. Lakukan penginpuutan data pada matrix
3. Lakukan pertukaran data pada matrix[genap][][] dengan matrix[ganjil][][]
4. Tampilkan matrix
*matrix[0] dianggap matrix[genap][][]
*/

#include <iostream>
using namespace std;
int main(){
    int matrix[4][2][3];
    // int bantu[4][2][3];

    for(int x = 0; x<4; x++){
        for(int y = 0; y<2; y++){
            for(int z = 0; z<3; z++){
                cout<<"Masukkan Nilai Matrix["<<x<<"]["<<y<<"]["<<z<<"] : ";
                cin>>matrix[x][y][z];
            }
        }
    }

    for(int x = 0; x<4; x++){
        if(x == 0 || x == 2){
            for(int y = 0; y<2; y++){
                for(int z = 0; z<3; z++){
                    int bantu[1][1][1];
                    bantu[0][0][0] = matrix[x][y][z];
                    matrix[x][y][z] = matrix[x+1][y][z];
                    matrix[x+1][y][z] = bantu[0][0][0];
                }
            }
        }
    }

    for(int x = 0; x<4; x++){
        for(int y = 0; y<2; y++){
            for(int z = 0; z<3; z++){
                cout<<"Matrix index["<<x<<"]["<<y<<"]["<<z<<"]: "<<matrix[x][y][z]<<"\n";
            }
        }
    }

    return 0;
}