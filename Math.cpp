#include<bits/stdc++.h>
#include<string>
#include<cctype>
using namespace std;


int main(){
    string s;
    cin >> s;
    auto p = remove(s.begin(), s.end(),'+');

    string::iterator it;
    it = s.begin();

    sort(it,p);

    for(; it!= p; it++){
        cout << *it ;
        if( it != p-1){
            cout << '+';
        }
    }
    
  
    return 0;
}