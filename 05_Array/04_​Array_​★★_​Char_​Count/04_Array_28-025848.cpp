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
    
    string sentence; getline(cin,sentence);
    char sen ; 
    for(int i=0 ; i<26; i++){
        sen = 65+i; 
        int cnt=0;
        bool find = false;
        for( int j=0 ; j<sz(sentence) ; j++){
            if(sentence[j] == sen || sentence[j] == (sen+32)){
                find = true;
                cnt++;
            }
        }
        if(find) cout << (char)(sen+32) << " -> " << cnt << endl;
    }
}

