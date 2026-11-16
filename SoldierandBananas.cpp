#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int k, n ,w; cin>>k>>n>>w;
    int total = 0;
    for (int i = 1; i<=w; i++){
        total += k * i;
    }
    if (total > n) cout<<total-n<<"\n";
    else cout<<0<<"\n";

    return 0;
}