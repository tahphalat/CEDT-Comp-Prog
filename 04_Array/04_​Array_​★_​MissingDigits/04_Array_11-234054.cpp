#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
   getline(cin,a);
   vector<int> all={0,1,2,3,4,5,6,7,8,9};
   int cnt=0;
   bool first[10];
   for(int i=0 ; i<10 ;i++) first[i] =1 ;
   for(int i=0;i<a.length();i++){
      if(a[i]=='0'){
           if(first[0]){
            cnt++;
           all.erase(remove(all.begin(),all.end(),0),all.end());
           first[0] = false;
           }
      }
        if(a[i]=='1'){
           if(first[1]) {
            cnt++;
        all.erase(remove(all.begin(),all.end(),1),all.end());
           first[1] = false;
           }
      }
        if(a[i]=='2'){
           if(first[2]){
            cnt++;
          all.erase(remove(all.begin(),all.end(),2),all.end());
           first[2] = false;
           }
      }
        if(a[i]=='3'){
           if(first[3]){cnt++;
           all.erase(remove(all.begin(),all.end(),3),all.end());
           first[3] = false;
           }
      }
        if(a[i]=='4'){
           if(first[4]){cnt++;
           all.erase(remove(all.begin(),all.end(),4),all.end());
           first[4] = false;
           }
      }
        if(a[i]=='5'){
           if(first[5]){cnt++;
          all.erase(remove(all.begin(),all.end(),5),all.end());
           first[5] = false;
           }
      }
        if(a[i]=='6'){
           if(first[6]){cnt++;
         all.erase(remove(all.begin(),all.end(),6),all.end());
           first[6] = false;
           }
      }
        if(a[i]=='7'){
           if(first[7]){cnt++;
          all.erase(remove(all.begin(),all.end(),7),all.end());
           first[7] = false;
           }
      }
        if(a[i]=='8'){
           if(first[8]){cnt++;
           all.erase(remove(all.begin(),all.end(),8),all.end());
           first[8] = false;
           }
      }
      if(a[i]=='9'){
           if(first[9]) {cnt++;
           all.erase(remove(all.begin(),all.end(),9),all.end());
           first[9] = false;
           }
      }
        }
          if(all.empty()){
            cout<<"None";
            return 0;
    }
    //  cout << "cnt : " << cnt <<endl;
     int cnt2=0;
     for(int num: all){
        cnt2++;
        cout<<num;
        // cout << "cnt2 -> " << cnt2 <<endl;
        if(cnt2 != 10-cnt) cout << ",";
     }
   }
