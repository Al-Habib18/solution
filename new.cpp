#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b,diff= 0 , same = 0, rem;
    cin >> a >> b;

    if( a > b){
        diff =b;
        rem = a-b;
        same = rem/2;
    }
    else if( b > a){
        diff = a;
        rem = b-a;
        same = rem/2;
    }
    else{
        diff = a;
        same = 0;
    }

    cout <<diff << " " << same << endl;
    return 0;
}