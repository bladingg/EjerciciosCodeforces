#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int a= 0, b = 0;
    string s; cin>>s;
    for (int i = 0; i<n; i++){
        if(s[i] == 'A') a++;
        if(s[i] == 'D') b++;
    }
    if(a>b){
        cout<<"Anton"<<"\n";
    }else if (a == b){
        cout<<"Friendship"<<"\n";
    }else cout<<"Danik"<<"\n";

    return 0;
}