#include<bits/stdc++.h>
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

    string sen; getline(cin, sen);
    int pos[2] = {0} ;
    int cnt=0;
    for(int i=0 ; i<sz(sen) ; i++){
        if(sen[i] == ' ') {
            cnt++;
        }
    }
    bool first_j = true;
    for(int i=0, j=0 ; j<cnt && i<sz(sen) ; i++){
        if(sen[i] == ' '){
            pos[j] = i;
            if(cnt == 1)  pos[1] = pos[j]; 
            if(first_j) {
                j++;
                first_j = false;
            }
        }
    }
    string front="",back="";
    int mem_pos[2]={0};
    bool b_front = true, b_back = false;
    bool be_vowel = 0;
    for(int i=1; i<sz(sen) ; i++){
        be_vowel = (sen[i] == 97 || sen[i] == 101 || sen[i] == 105|| sen[i] == 111 || sen[i] == 117); 
        if(be_vowel){
            if(b_front){
                front = sen.substr(i,pos[0]-i);
                mem_pos[0]=i;
                i=pos[1];
                b_front = false;
                b_back = true;
                continue;
            }
            if(b_back){
                back = sen.substr(i,sz(sen)-i);
                mem_pos[1]=i;
                break;
            }
        }
    }
    string sen2 = sen;
    sen2 = sen2.erase(mem_pos[1],sz(sen)-mem_pos[1]);
    sen2 = sen2.erase(mem_pos[0],pos[0]-mem_pos[0]);
    sen2 = sen2.insert(mem_pos[0], back);
    sen2 = sen2.append(front);
    cout << sen2 << endl;
}