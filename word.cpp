#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin>>s;
    int mayus = 0, min = 0; 
    for (int i = 0; i<s.size(); i++){
        if(isupper(s[i])) mayus++;
        if (islower(s[i])) min++;
    }
    if (mayus>min){
        for(int j = 0; j<s.size(); j++) s[j] = toupper(s[j]);
    }else{
        for(int j = 0; j<s.size(); j++) s[j] = tolower(s[j]);
    } 
    cout<<s<<"\n";
    
   
    return 0;
}