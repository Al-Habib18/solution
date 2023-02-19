#include<bits/stdc++.h>
using namespace std;

int  main(){

    string first,second, third;
    cin >> first >> second >> third;

    string s = first + second;

    sort(s.begin(), s.end());
    sort(third.begin(), third.end());

    if( s == third){
        cout << "YES";
    }else{
        cout << "NO";
    }

return 0;
}
