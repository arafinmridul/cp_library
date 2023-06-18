#include<bits/stdc++.h>
using namespace std;

int MEX(vector<int>v, int n){
    sort(v.begin(),v.end());
    int mex = 0;
    for(int i=0; i<n; ++i){
        if(mex == v[i])
            mex++;
        if(v[i] > mex)
            break;
    }
    return mex;
}

int main(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &e:v)cin>>e;

    cout << MEX(v,n) << endl;
}