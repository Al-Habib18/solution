#include<bits/stdc++.h>
using namespace std;

int main(){
    long k,n,w;     //k for cost of first banana... n for numner of dollars he has..
    int  value = 0, borrow = 0;// borrow will be result ..//  w for numbers of bananas
    cin >> k >>n >> w;      

    for(int i = 1 ; i<= w ;i++){
        value += (i*k);
    }
    
    borrow =value - n;

    if( borrow < 0){
        borrow = 0;
    }
    cout << borrow;

    return 0;
}