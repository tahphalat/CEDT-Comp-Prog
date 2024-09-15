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
    
    string num1, num2;  
    cin >> num1 >> num2;
    string ans = "";
    ll tod=0;
    while(num2 != "END"){
       if(sz(num1)>sz(num2))num2 = string((sz(num1)-sz(num2)),'0')+num2;
       else num1 = string((sz(num2)-sz(num1)),'0')+num1;

        for(ll i=sz(num1)-1,j=sz(num2)-1 ; i>=0 ; i--,j-- ){
            ll sum = (num1[i]-'0') + (num2[j]-'0') + tod;
            tod = (sum >= 10) ? 1 : 0;
            string s_sum = to_string(sum);
            if(sum >=10) s_sum = s_sum.substr(1);
            ans = s_sum + ans;
            if(sum >=10 && i ==0) ans = '1'+ans;
        }

        num1 = ans;
        cin >> num2;
        if(num2 == "END") break;
        ans = "";
        tod = 0;
    }
    cout << ans.substr(0,sz(ans));
}
