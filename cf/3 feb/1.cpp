#include<bits/stdc++.h>
using namespace std;

int f(int x, int n) {
    int p = sqrt(x);
    if(n < p) {
        for(int i=n+1;i<=p;i++){
            if(x % i == 0){
                return (x/i);
            }
        }
        for(int i=n-1;i>=2;i--){
            if(x%i==0){
                return i;
            }
        }
    } else {
        int temp = x/n;
        for(int i=temp;i>=2;i--) {
           if(x % i == 0){
                return i;
            }
        }
    }
    return 1;
}

int main() {
    int x, n, t;
    cin>>t;
    while(t--){
        cin>>x>>n;
        if(x % n == 0){
            cout<<(x/n)<<'\n';
        } else {
            cout << f(x, n) << '\n';
        }
    }
}