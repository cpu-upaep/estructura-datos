//Source: https://ide.usaco.guide/OMV3bLRhdyDO7IYX8Sp
#include <bits/stdc++.h>
using namespace std;

using ll = long long;


int main() {
    ll ans = 0, psum;
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin>>v[i];

    psum = v[n-1];    
    for(int i = n-2; i >= 0; i--){
        cout<<psum<<" - ";
        ans += v[i] * psum;
        cout<<ans<<" - ";
        psum += v[i];
        cout<<endl;
    }

    cout<<ans<<endl;
    
}
