#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin>>s;
    vector<char> v;
    for(char c : s){
        if(c != '+') v.push_back(c);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i<v.size(); i++){
        if(i>0) cout<<"+";
        cout<<v[i];
    }
    return 0;
}