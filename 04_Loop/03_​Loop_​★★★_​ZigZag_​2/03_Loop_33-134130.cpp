#include<iostream>
using namespace std;

int main(){
  int x,y; cin >> x >> y;
  int max1 = y, min1 =x;
  int max2 = x, min2 = y;
  int count =1;
  while(cin >> x){
    count++;
    if(x==-998 || x==-999) break;
    cin >> y;
    
    if(count%2==0){
      max1=max(max1,x);
      min1=min(min1,y);
      max2=max(max2,y);
      min2=min(min2,x);
    }
    else{
      max1=max(max1,y);
      min1=min(min1,x);
      max2=max(max2,x);
      min2=min(min2,y);
    }
  }
  
  if(x==-998) cout << min1 << " " << max1;
  if(x==-999)cout << min2 << " " << max2;
  
}