#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vt vector
#define pb push_back
#define all(c) c.begin(),c.end()
#define sz(x) (int)x.size()
#define EACH(x,a) for(auto &x:a)

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll m; cin >> m;
    while(m--){
        ll sum=0;
        ll n; cin >> n;
        vt<ll> v_score;
        ll score;
        while(n--){
            cin >> score; 
            v_score.pb(score);
        }
        sort(all(v_score));
        v_score.erase(v_score.begin());
        EACH(t,v_score) sum+=t;
        cout << sum << endl;
        v_score.clear();
    }
    return 0;
}