#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin>>s;
    set<char>letras;
    for (char c : s){
        letras.insert(c);
    }
    if (letras.size() % 2 == 0) cout<<"CHAT WITH HER!"<<"\n";
    else cout<<"IGNORE HIM!"<<"\n";
    
    return 0;

}