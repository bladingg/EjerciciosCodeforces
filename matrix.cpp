#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int matriz[5][5];
    int fila, columna;
    for (int i = 0; i<5;i++){
        for (int j = 0; j<5; j++){
            cin>>matriz[i][j];
            if (matriz[i][j] == 1){
                fila = i;
                columna = j;
            }
        }
    }
    int filaC = abs(fila-2);
    int colC = abs(columna-2);
    cout<<filaC + colC<<"\n";
    return 0;
}