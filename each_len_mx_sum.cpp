//this can be done by using sliding window or two pointers
//this can also be done with the time complexity of O(n^2)
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nl '\n'

void solve(){
    int n,x; cin>>n>>x; int a[n];
    for(int i=0; i<n; ++i){
        cin >> a[i];
    }
    vector<int> v(n+1,INT_MIN);
    v[0] = 0;
    for(int i=0; i<n; ++i){
        int temp = 0;
        for(int j=i; j<n; ++j){
            temp += a[j];
            v[j-i+1] = max(v[j-i+1],temp);
        }
    }
    //max sub array sum of each length
    for(int i=0; i<=n; ++i)
        cout << v[i] << ' ';
    cout << nl;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}