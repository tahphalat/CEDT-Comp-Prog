#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long int m,n; cin >> m >> n;
    string s_m,s_n; 
    s_m = to_string(m);
    s_n = to_string(n);

    long long int ans =0;
    if(s_m.size() == s_n.size()) ans = (n-m+1)*s_m.size();
    else {
        //front  ex. 7-102 -> get 7 8 9
        ans += ((long long int)pow(10,s_m.size())-m)*s_m.size(); 
        // cout << "Front : " << ans << endl;
        //middle ex. 7-102 -> get 10 - 99 (ใช้วิธีคิดจากการหา n จากสูตรลำดับเลขคณิต an = a1 + (n-1)d )
        for(int i=s_m.size()+1 ; i<s_n.size() ; i++) ans += 9*(long long int)pow(10,i-1)*i;
        // cout << "Mid : " << ans << endl;

        //back ex. 7-102 -> 100 101 102
        ans += (n-(long long int)pow(10,s_n.size()-1)+1)*s_n.size();
        // cout << "Back : " << ans <<endl;
    }
    cout << ans;
}