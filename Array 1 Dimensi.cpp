#include <iostream>
using namespace std;

int main(){
    int i,j;
    double nilai[10];
    cout << "Berapa rentang nilai yang ingin diisi ? ";
    cin >> j;
    cout << "\n";

    for (i=0;i<j;i++){
        cout << "Masukkan nilai ke-"<<i+1<<" = ";
        cin >> nilai[i];
    }
    cout << "\nCetak" << endl;
    cout << "======" << endl;
    for (i=0;i<j;i++){
        cout << "Nilai ke-"<<i+1<<" = " <<nilai[i]<<endl;
    }
    return 0;
}
