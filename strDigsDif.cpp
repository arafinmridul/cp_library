#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nl '\n'

int digDif(string s,string p){
    int ans = 0, a = s.size()-1, b = p.size()-1;
    while(a>=0 and b>=0){
        ans += abs((s[a]-'0')-(p[b]-'0'));
        a--; b--;
    }
    while(a>=0){ans += s[a]-'0'; a--;}
    while(b>=0){ans += p[b]-'0'; b--;}
    return ans;
}

void solve(){

}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}