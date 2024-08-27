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
    ll h[n];
    for(int i=0 ; i<n ; i++) cin >> h[i] ;

    //1 2 3 4 5 6
    //0 1 2 3 4 5
    ll res = 0 ;
    ll right, left;
    for(int i=1 ; i<n-1 ; i++) {

        right = h[i];
        for(int j=i ; j<n ; j++) if(h[j] >= right) right = h[j];

        left = h[i];
        for(int j=i ; j>=0 ; j--) if(h[j] >= left) left = h[j];

        // cout << "middle : "  << h[i] << endl;
        // cout << "right : " << right << endl;
        // cout << "left : "<< left << endl;
        // cout << "##################" <<endl;

       res += min(right,left) - h[i] ;
    }
    cout << res << endl;
}
