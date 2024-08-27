#include <iostream>
using namespace std;
int main(){
    string s; cin>> s;
    int n; cin>> n;
    int count=1;
    for(int i=1 ; i<=s.size() ; i++){
        
        if(s[i] == s[i-1]) {
            count++; 
        }
        else if(s[i] != s[i-1] || i==s.size()){
            if(count >=n){
               s.erase(i-count,count) ;
               i -= count;
            }
            count =1;            
        }
    }
    cout << s;
}