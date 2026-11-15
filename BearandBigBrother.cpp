#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b; cin>>a>>b;
    int anos = 0;
    while (a<=b && a>0 && b>0){
        a = a*3;
        b = b*2;
        anos++;
    }
    cout<< anos <<"\n";
    return 0;
}