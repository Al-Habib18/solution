#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int lo = 0, up = 0;
    s.resize(100);

    cin >> s;
    for(int i = 0; i!= s.size(); i++){
        if(islower(s[i])){
            ++lo;
        }else{
            ++up;
        }
    }
    if( up > lo){
        for(int i = 0; i != s.size() ;i++){
            char c = toupper(s[i]);
            s[i] = c;
        }
    }
    else {
         for(int i = 0; i != s.size() ;i++){
            char c = tolower(s[i]);
            s[i] = c;
        }
    }

    cout <<s;

}