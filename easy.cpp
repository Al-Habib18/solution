/* In search of an easy poblem
date : 23 - jan - 2023*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a, r = 0;
    vector<int> vi;
    cin >> n;

    for(int i = 0; i<n ; i++){
        cin >> a;
        vi.push_back(a);
    }
    for(int i = 0; i<n ;i++){
        r += vi.at(i);
    }
    if(r == 0){
        cout  << "EASY";
    }
    else{
        cout << "HARD";
    }
    return 0;
}