#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vt vector

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   ll R,C; cin >> R >> C;
      //Input 
   ld x[R][C];
   for(int i=0 ; i<R ;i++){
      for(int j=0 ; j<C ; j++){
         cin >> x[i][j];
      }
   }
      // check 
   // for(int i=0 ; i<R ;i++){
   //    for(int j=0 ; j<C ; j++){
   //       cout  << x[i][j];
   //    }
   //    cout << endl;
   // }

   ld sum=0;
   int cnt=0;
   if(R>=3){
      for(int i=1 ; i<=R-2 ; i++){ // 0 1 2 3 4 5 
         for(int j=1 ; j<=C-2 ; j++){
            sum = x[i-1][j-1] + x[i-1][j] + x[i-1][j+1] +
                  x[i][j-1] + x[i][j] + x[i][j+1] +
                  x[i+1][j-1] + x[i+1][j] + x[i+1][j+1];
            cout << round(sum/9*100)/100 << " ";
         }
         cout << endl;
      }
   }
   else if(R==1){
      for(int i=0 ; i<C-2 ;i++){
         cnt++;
         sum = (x[0][i] + x[0][i+1] +x[0][i+2])/3;
         cout << sum << " ";
      }
   }
}