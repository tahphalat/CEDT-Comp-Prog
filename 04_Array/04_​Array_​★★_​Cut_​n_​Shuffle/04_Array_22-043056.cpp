#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vt vector
#define pb push_back
#define sz(x) (int)x.size()
#define arr_sz(x) (int)sizeof(x)/sizeof(x[0])

void getCut(vt<string>& s, int sz){
    //for(int i=0 ;i<sz ;i++) cout << s.at(i) << " " << endl;
    for(int i=0 ; i<sz/2 ; i++){
        swap(s[i],s[i+sz/2]);
    }
}

void getShuffle(vt<string>& s, int sz){
    vt<string> fak_s;  
    for(int i=0, j=sz-1 ; i<sz/2 ; i++,j--){
        fak_s.pb(s[i+sz/2]);
        s.pop_back();
    }

    for(int i=1,j=0 ; i<=sz/2 ; i++,j++){
        s.insert(s.begin()+i+j, fak_s[i-1]);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;  cin >> n; 
    vt<string> card;
    string fak; 
    for(int i=0 ; i<n ; i++) {
        cin >> fak;
        card.pb(fak);
    }
    //for(int i=0 ;i<n ;i++) cout << card.at(i) << " " ;

    //getCut(card,sz(card));
    //for(int i=0 ;i<n ;i++) cout << card.at(i) << " " ;

   //getShuffle(card,sz(card)); 
   //for(int i=0 ;i<n ;i++) cout << card.at(i) << " " ;


    vt<string> order;
    string inputOrder;
    cin.ignore();
    while(getline(cin, inputOrder)){
        for(int i=0 ; i<sz(inputOrder) ; i++){
            if(inputOrder[i] == 'C') getCut(card,sz(card));
            if(inputOrder[i] == 'S') getShuffle(card,sz(card));
        }
        for(int i=0 ; i<sz(card) ; i++) {
            cout << card.at(i) << " " ;
        }   
        cout << endl;
    }
}

