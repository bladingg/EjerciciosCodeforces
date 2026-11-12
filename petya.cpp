#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b; cin>>a>>b;
    int valor;
    for (int i = 0; i < a.size(); i++){
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
    if(a<b) valor = -1;
    if(a>b) valor = 1;
    if(a==b) valor = 0;
    cout<<valor<<"\n";


    return 0;
}