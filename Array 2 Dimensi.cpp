#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int nilai[10][10];
    int brs,klm,i,j;
    cout<< "Berapa jumlah baris yang anda inginkan = ";
    cin>>brs;
    cout<< "Berapa jumlah kolom yang anda inginkan = ";
    cin>>klm;
    cout<<"\n";

    for (i=0;i<brs;i++){
        for(j=0;j<klm;j++){
            cout<<"Matriks ke ["<<i+1<<","<<j+1<<"] : ";
            cin>>nilai[i][j];
        }
    }
    cout<<"\n";

    for (int i=0;i<brs;i++){
        for(int j=0;j<klm;j++)
        cout<<nilai[i][j]<< " " ;
        cout<<endl;
    }
    getch();
}
