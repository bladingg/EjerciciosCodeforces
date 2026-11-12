#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>> n;
    for (int i = 0; i<n; i++){
        string s; cin>>s;
        if(s.size()>10)cout<< s[0]<< s.size() - 2<< s.back()<<"\n";
        if(s.size()<=10)cout<<s<<"\n";
    }
    return 0;
}