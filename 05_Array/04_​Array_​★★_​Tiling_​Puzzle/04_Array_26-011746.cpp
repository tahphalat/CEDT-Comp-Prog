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

  int n; cin >> n;
  int item_input[n][n];
  for(int i=0 ; i<n ; i++) for(int j=0 ; j<n ; j++) cin >> item_input[i][j] ;

  vt<int> item ;
  int row;
  for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<n ; j++){
    if(item_input[i][j] != 0) item.pb(item_input[i][j]);
      else row = i;
    }
  }
  int cnt=0;
  for(int i=0 ; i<sz(item)-1; i++){
    for(int j=0,k=i+1 ; j<sz(item)-1-i; j++,k++){
      // cout << "item[i] : " << item[i] << endl << "item[k] : " << item[k] << endl;
      // cout << "###########" << endl;
      if(item[i] > item[k]) cnt++;
    }
  }
  //cout << cnt << endl;

  bool ok = false;
  if(n%2!=0 && cnt%2==0) ok = true;
  else if(n%2==0){
    if(cnt%2!=0 && row%2==0 ) ok= true;
    else if(cnt%2==0 && row%2!=0) ok = true;
  }

  if(ok) cout << "YES";
  else cout << "NO";

}