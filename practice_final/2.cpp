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

    map<string,string> m1;
    ll n; cin >> n;
    string id, pnt;
    while(n--){
       cin >> id >> pnt;
        // cout << "id : " << id << " m1[id] : " << m1[id] << " pnt : " << pnt << endl;
        if(!(m1.find(id) != m1.end() && pnt < m1[id] && sz(pnt) <= sz(m1[id]))) {
            m1[id] = pnt;
        }
        // cout << "ans = " << m1[id] << endl;
    }
    map<string,vt<string>> m2={};
    
    vt<ll> order;
    EACH(t,m1){
        m2[t.second].pb(t.first);
        order.pb(stoll(t.second));
    }

    sort(all(order), greater<ll>());
    cin >> n;
    for(int i=0 ; i<n ; i++){
        cout << order[i] << " ";
        EACH(t,m2[to_string(order[i])]) cout << t << " ";
        cout << endl;
    }
    return 0;
}