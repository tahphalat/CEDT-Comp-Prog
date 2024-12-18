#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vt vector
#define pb push_back
#define sz(x) (int)x.size()
#define arr_sz(x) (int)sizeof(x)/sizeof(x[0])

string code[100000] = {"UUUU",  "UUUL",  "UULU",  "UULL", "ULUU",  "ULUL",  "ULLU",  "ULLL",  "LUUU",  "LUUL", "LULU",  "LULL"};
string _real[100000] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "-", "," };

string getConvertUL(string input, int size){
    string text_ul = "";
     for(int i=0 ; i<size ; i++){
        bool small = (input[i] >= 'a' && input[i] <= 'z');
        bool big = (input[i] >= 'A' && input[i] <= 'Z');

        if(small) text_ul += 'L';
        else if(big) text_ul += 'U';
    }
    return text_ul;
}

string getDecode(string input, int size){
    int j =0;
    string text_decoded = "";
    for(int i=0 ; i<size/4 ; i++){
        string text_decoding = input.substr(j,4);
        for(int k=0 ; k<12 ; k++){
            if(text_decoding == code[k]){
                text_decoded += _real[k];
            }
        }
        j = j+4;
    }
    
    return text_decoded;
}

    //แปลงเลข เป็น ul
string getConvertNumtoUl(string input, int size){
    string number_ul="";
    for(int j=0 ; j<size ; j++){
        for(int i=0 ; i<12 ; i++) {
            string separating_real = _real[i];//แปลง array string to string
            char tochar_real = separating_real[0]; //แปลง string to char
            if(input[j] == tochar_real) number_ul += code[i];
        }
    }
    return number_ul;
}
string getEncode(string ul, string input, int size){
    int cnt=0;
    string answer="";
    for(int i=0 ; cnt < size ; i++){
        bool f_small = (input[i] >= 'a' && input[i] <= 'z');
        bool f_big = (input[i] >= 'A' && input[i] <= 'Z');
        
        //ถ้าเป็นพิมพ์เล็ก -> แปลงเปนใหญ่
        if(input[i] >= 'a') {
            input[i] = input[i]-32;
            // if(number_ul[cnt] == 'L') input[i] = input[i]+32; 
        }
        //แปลงเล็กใหญ่ตาม number_ul
        if(ul[cnt] == 'L' && (f_small || f_big)) answer += char(input[i] + 32);
        else answer += input[i] ;
        if(f_small || f_big) cnt++;
        // cout << input[i];
        if(i==sz(input)-1){
            i=-1;    
        } 
    }
    return answer;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string fake; cin >> fake;
    string order;
    while(getline(cin, order)){

        if(order[0] == 'D'){
            // Decoding
            string text = order.substr(2,sz(order)-2); 
            string text_ul = getConvertUL(text, sz(text));
            string text_decoded = getDecode(text_ul, sz(text_ul));
            cout << text_decoded <<endl;
        }
        else if(order[0] == 'E'){
            // Encoding
            string input_code = order.substr(2,sz(order)-2);
            string number_ul = getConvertNumtoUl(input_code, sz(input_code));
            string text_encoded = getEncode(number_ul, fake, sz(number_ul));
            cout << text_encoded << endl;
        }
    }

}
