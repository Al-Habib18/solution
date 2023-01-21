#include<bits/stdc++.h>
#include<string>
#include<cctype>
using namespace std;


int main(){
    int x = 0, n;
    cin >> n;
    string s;
    cin >> s;

    for(int i= 0; i<n; i++){
        if(s[i] == s[i+1]){
            ++x;
        }
    }
    cout << x;
    return 0;
}