#include<bits/stdc++.h>
#include<string>
#include<cctype>
using namespace std;


int main(){
    int a,b, y = 0;
    cin >> a >> b;

    while(b>=a){
        a*=3;
        b*=2;
        ++y;
    }
    cout << y;
    return 0;
}