#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double
#define vt vector
#define pb push_back
#define sz(x) (int)x.size()
#define arr_sz(x) (int)sizeof(x)/sizeof(x[0])

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    ld a[n];
    for(ll i=0 ; i<n ; i++) cin >> a[i] ;

    for(ll i=n-1 ; i>=0 ; i--){
        ld res=0;
        for(ll j=i ; j>=0 ; j--){
            res += a[j];
            if(j != 0) res = 1/res;
        }
        a[i] = res;
    }
    for(int i=0 ; i<n ; i++) cout << setprecision(10)<< a[i] << endl ;
}
