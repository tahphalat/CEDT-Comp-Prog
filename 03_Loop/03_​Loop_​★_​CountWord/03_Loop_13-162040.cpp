#include <iostream>
using namespace std;

int main(){
    string target; cin >> target;
    cin.ignore();
    string sentence; getline(cin, sentence);
    int pos=0,count=0;
    int posi = 0;
    while((pos != string::npos  )){
        pos=sentence.find(target,posi);
        if (pos < posi) break;
        posi = pos+target.size();
        bool sep1 = sentence[pos-1] < 65|| sentence[pos-1] > 90&& sentence[pos-1] < 97|| sentence[pos-1] > 122 ;
        bool sep2 = sentence[posi] < 65|| sentence[posi] > 90&& sentence[posi] < 97|| sentence[posi] > 122 ;
        if(sep1 && sep2){
            count++;
        }
    }
    cout << count <<endl;

    
}