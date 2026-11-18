#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin>>s;
    int yes = 0;
    for (int i= 0; i<s.size(); i++){
        if(s[i] == '4') yes++;
        if(s[i] == '7') yes++;

    }
    if(yes == 4 || yes == 7)cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    return 0;
} 