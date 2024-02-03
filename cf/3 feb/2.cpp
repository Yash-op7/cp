#include<bits/stdc++.h>
using namespace std;

#define vi vector<ll>
#define F first
#define S second
#define ll long long

int main(){
    ll t, n;
    cin>>t;
    while(t--){
        map<ll, ll> mp;
        ll x,n;
        cin>>n;
        for(ll i=0;i<n;i++){
            cin>>x;
            mp[x]++;
        }
        ll ans = 0;
        ll cnt = 0;
        for(const auto x:mp) {
            ll val = x.F, freq = x.S;
            if(freq > 2) {
                ans += ((freq*(freq-1)*(freq-2))/6);
            }
            if(freq > 1){
                ans += cnt * ((freq*(freq-1))/2);
            }
            cnt += freq;
        }
        cout<<ans<<'\n';
    }
}