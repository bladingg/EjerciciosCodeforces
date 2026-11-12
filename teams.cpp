#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int respuesta= 0;
    for (int i = 0; i<n; i++){
        int suma = 0;
        for( int j = 0 ; j<3;j++){
            int x; cin>>x;
            suma += x;
        }
        if(suma>=2) respuesta++;
        

    }
    cout<<respuesta<<"\n";


    return 0;
}