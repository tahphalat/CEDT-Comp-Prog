#include <iostream>
#include <string>
using namespace std;

bool checkCondition(string s, int s_size){
    if(s[0] != 'R') return false;
    for(int i=0 ; i < s_size ; i+=4){
        if(s[i] == 'R'){
            if(s[i+2] == 'R') return false;
        }

        else if(s[i] == 'Y'){
            //Y G N B P K 
            string ok = "Y G N B P K";
            int count = 0;
            for(int j=i ; j<s_size ; j+=2) {
                if(count == ok.size()) return false;
                else if(s[j] == ok[count]) count+=2;
                else return false;
            }
            return true;
        }
        else return false;
    }
    return true;
}

int getPoint(string s, int s_size){
    int point=0;
    for(int i=0 ; i<s_size ; i+=2){
        if(s[i] =='R') point += 1; 
        else if(s[i] =='Y') point += 2; 
        else if(s[i] =='G') point += 3; 
        else if(s[i] =='N') point += 4; 
        else if(s[i] =='B') point += 5; 
        else if(s[i] =='P') point += 6; 
        else if(s[i] =='K') point += 7; 
    }
    return point;
}

int main(){ 
    int n; cin>>n;
    string s;
    int i=0;

    cin.ignore();
    while(i<n) {
        getline(cin,s);
       //check ตรงเงื่อนไขไหม
       if(checkCondition(s,s.size())){
            //ถ้าตรงก็นับคะแนน
            cout << getPoint(s,s.size()) <<endl;
       }
    //     //ถ้าไม่ก็ wrong ans 
        else cout << "WRONG_INPUT" << endl;
        i++;
    }
}