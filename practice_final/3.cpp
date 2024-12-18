#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vt vector
#define pb push_back
#define all(c) c.begin(),c.end()
#define sz(x) (int)x.size()
#define EACH(x,a) for(auto &x:a)

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n,m;
    cin >> n >> m;
    map<string,set<string>> data;
    map<string,string> fak;
    string mr,dept;
    while(n--){
        cin >> mr >> dept;
        data[dept].insert(mr);
        fak[mr]=dept;
    }

    ll order; 
    while(m--){
        cin >> order;
        string old_dept, new_dept;
        if(order==1){
            cin >> mr >> dept;
            data[dept].insert(mr);
            //ใส่ dept ไปให้ data เพื่อให้มันชี้ไปลบ
            data[fak[mr]].erase(mr);
            fak[mr]=dept;
        }
        else if(order==2){
            cin >> old_dept >> new_dept;
            EACH(t,data[old_dept]) data[new_dept].insert(t);
            data.erase(old_dept);
        }
    }
    EACH(t,data){
        cout << t.first <<": ";
        EACH(e,t.second) cout << e << " ";
        cout << endl;
    }
    return 0;
}