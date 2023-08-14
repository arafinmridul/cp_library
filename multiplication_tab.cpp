#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 10;
    int num_of_ops = 0;
    //multiplication table in a given range
    for(int i=1; i<=n; ++i){
        for(int j=i; j<=n; j+=i){
            num_of_ops++;
            cout << j << ' ';
        }
        cout << endl;
    }
    cout << num_of_ops << endl;
}