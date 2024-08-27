#include <bits/stdc++.h>
using namespace std;

int main(){
    long int N; cin >> N;
    long int k=2,count[100]={0};
    long int ccount=0;
    long int lap=0;
    long int ans[100]={0};
    bool first = true;

    //Processing
    long int i=0;
    while(k<=N) {
        if(N%k==0 && !first) i++;
        if(N%k==0){
            ccount++;
            first = false;
        }
        while(N%k==0){
            ans[i] = k;
            N/=k;
            count[i]++;
            lap++;
        }
        k++;
    }
    //OutPut
    // cout << lap << endl;
    // cout << ccount << endl;
    for(long int i=0 ; i<ccount ;i++){
        for(long int j=0 ; j<count[i] ; j++){
            cout << ans[i];
            lap--;
            if(lap>0)cout<< "*";
        }
    }
}