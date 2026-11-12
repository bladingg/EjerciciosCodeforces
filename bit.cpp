#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int resultado = 0;
    for(int i = 0; i<n; i++){
        string s; cin>>s;
        if (s[1] == '+') resultado ++;
        else resultado --;
    }
    cout<<resultado<<"\n";

    return 0;
}