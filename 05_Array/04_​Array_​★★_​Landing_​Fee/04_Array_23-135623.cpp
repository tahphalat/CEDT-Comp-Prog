#include <bits/stdc++.h> 
using namespace std;

#define ll long long
#define ld long double
#define vt vector
#define pb push_back
#define sz(x) (int)x.size()
#define arr_sz(x) (int)sizeof(x)/size(x[0])

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    string country[n];
    ll fee[n];
    for(int i=0 ; i<n ;i++){
        cin >> country[i];
        cin >> fee[i];
    }
    cin.ignore();
    string code; getline(cin,code);

    //นับจำนวน -  
    int line_cnt=0;
    for(int i=0 ; i<sz(code) ; i++) if(code[i] == '-')  line_cnt++;

    //หาตนแต่ละชื่อประเทศ แล้วทำการแยกชื่อประเทศออกจากชื่อสนามบิน
    int pos=0;
    string code_country[line_cnt];
    for(int i=0 ; i<line_cnt ; i++){
        pos = code.find('-', pos) ;
        // cout << pos << endl;
        pos++;

        code_country[i] = code.substr(pos,2);
        // cout << code_country[i] << endl;
    }

    //นับราคา
    ll cost = 0;
    for(int i=0 ; i<line_cnt ; i++){
        if(i==0 )  continue; // ไม่นับครั้งแรก 
        for(int j=0 ; j<n; j++){
            if(code_country[i] == code_country[i-1]) continue;  
            if(code_country[i] == country[j])  cost += fee[j]; 
            else continue;
        }
    }
    cout << cost << endl;    
}
