#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
#define vt vector
#define pb push_back
#define sz(x) (int)x.size()

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    vt<int> x; 
    int a;
    for(int i=0 ; i<n ; i++){
        cin >> a;
        x.pb(a);
    }

    int cnt=0;
    for(int j=1 ; j<=sz(x)-2 ;j++){
        bool peak = (x[j]>x[j-1] && x[j] >x[j+1]);
        if(peak) cnt++;

    }
    cout << cnt <<endl;
}
