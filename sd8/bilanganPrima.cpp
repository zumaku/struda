#include <iostream>
using namespace std;
int main(){
  int bil;
  cout<<"Menampilkan Deret Bilangan Prima 1-100";
  cout<<endl;
  for(int i=1;i<=100;i++){
    bil=0;
    for(int j=1;j<=i;j++){
      if(i%j==0){
        bil=bil+1;
      }
    }
    if (bil==2)
      cout<<i<<" ";
  }
}
