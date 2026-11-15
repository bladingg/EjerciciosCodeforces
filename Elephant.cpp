#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a; cin>>a;
    int pasos = 0;
    while (a>0){
        a -= 5;
        pasos++;
        if(a<0) break;
    }
    cout<<pasos<<"\n";
    return 0;

}