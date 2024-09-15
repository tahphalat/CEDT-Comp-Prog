#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vt vector
#define pb push_back
#define sz(x) (int)x.size()
#define arr_sz(x) (int)sizeof(x)/sizeof(x[0])

ll getOV_Area(ll x1[], ll x2[]){
    ll w = min(x1[2],x2[2]) - max(x1[0],x2[0]);
    ll h = min(x1[3],x2[3]) - max(x1[1],x2[1]);
    if( w<0 || h<0 ) return 0;
    return w*h;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    ll x[n][4];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<4 ; j++){
            cin >> x[i][j];
        }
    }
    
    ll max_Area = 0;
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            ll OV_Area = getOV_Area(x[i], x[j]);
            if(OV_Area > max_Area) max_Area = OV_Area;
        }
    }

    if(max_Area == 0) {
        cout << "No overlaps" << endl;
        return 0 ;
    }
    cout << "Max overlapping area = " << max_Area << endl;
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            ll OV_Area = getOV_Area(x[i], x[j]);
            if(OV_Area == max_Area) cout << "rectangles " << i << " and " << j << endl;
    }
    
}
}
