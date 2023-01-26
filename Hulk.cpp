#include<bits/stdc++.h>
using namespace std;

vector<string> v1 {"I love that ", "I love it"};
vector<string> v2 {"I hate that ", "I hate it"};

string feel(int i,int n){

    if( i % 2 == 0){
        if( i == n ){
            return v1[1];
        }
        else{
            return v1[0];
        }
    }
    else{
        if(i == n){
            return v2[1];
        }
        else{
            return v2[0];
        }
    }      
}


int main(){
    int n;
    cin >> n;
    string s;

    for(int i=1; i<=n ;i++){
        s += feel(i,n);
    }

    cout << s;

    return 0;
}