#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t, n;
    cin>>t;
    while(t--) {
        cin>>n;
        ll x=0, y=0, c_sum = 0, curr_ans = 0;
        ll curr;
        for(ll i=0;i<n;i++) {
            cin>>curr;
            curr%2 == 0 ? y++:x++;
            c_sum += curr;
            curr_ans = c_sum - (x/3) - ((x%3 == 1 && i > 0) ? 1:0);
            cout<<curr_ans<<' ';
            // curr%2 == 0 ? cout<<"even":cout<<"odd";
        }
        cout<<'\n';
    }
}