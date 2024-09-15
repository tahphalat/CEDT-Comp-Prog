#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vt vector
#define sz(x) x.size()
#define arr_sz(x) sizeof(x)/sizeof(x[0])

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   string s; 
   while(getline(cin,s)){
      int swt = -1;
      // 1 = ok , -1 = not ok
      char mem_s=' ';
      bool first_mem = true;
      for(int i=0 ; i<sz(s) ; i++){
         char fak = s[i];
         bool spl = (s[i] >= 33 && s[i] <= 47 && s[i] !=45) || (s[i] >= 58 && s[i] <= 64)|| (s[i] >= 123 && s[i] <= 126)|| (s[i] >= 91 && s[i] <= 96);
         bool end = false;
         // 33 - 47 
         // 58 - 96

         if(spl && first_mem) {
            mem_s = s[i];
            first_mem = false;
            // cout << " MEM = " << mem_s << endl; 
         }
         bool same = (mem_s == fak);
         if(spl && same){
            swt *= -1;
            if((i==sz(s)-1) && spl ) {
               swt*= -1; 
               bool end = true;
            }
            if(end) cout << endl;
            continue;
         }
         if(swt == 1) cout << s[i];
      }
      cout << flush << endl;
   }
}