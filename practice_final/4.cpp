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

    ll n; cin >> n;
    while(n--){
        string team1,team2,result;
        cin >> team1 >> team2;
        cin >> result;
        string sco1,sco2;
        vt<string> resu1,resu2;
        ll cnt1=0,cnt2=0;
        while(result != "*"){
            int pos = result.find("-");
            sco1 = result.substr(0,pos);
            resu1.pb(sco1);
            sco2 = result.substr(pos+1);
            resu2.pb(sco2);
            if(stoi(sco1) > stoi(sco2)) cnt1++;
            else cnt2++;

            cin >> result;
        }

        if(cnt1>cnt2) cout << "*";
        cout << team1 << " " << cnt1 <<" [ ";
        EACH(t,resu1) cout << t << " ";
        cout << "]" << endl;
        if(cnt1<cnt2) cout << "*";
        cout << team2 << " " << cnt2 <<" [ ";
        EACH(t,resu2) cout << t << " ";
        cout << "]" << endl;

        resu1.clear();
        resu2.clear();

    }
    return 0;
}