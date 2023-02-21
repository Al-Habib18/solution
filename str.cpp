#include<bits/stdc++.h>
using namespace std;

int  main(){
    int n;
    cin >> n;
    int m;
    cin >> m;

    string hash,f_hash, l_hash;
    for(int i =0; i<m ;i++){
        hash.push_back('#');
    }
    
    for(int i=0; i<m ; i++){
        if( i==0){
            f_hash.push_back('#');
        }
        else{
            f_hash.push_back('.');
        }
    }

    for(int i=0; i<m;i++){
        if(i ==m-1){
            l_hash.push_back('#');
        }
        else{
            l_hash.push_back('.');
        }
    }
    int l=1;
    int f=3;
    for(int i=0; i<n; i++){
        if(i == 0 || i%2 == 0){
            cout << hash << endl;
        }
        else{
            if( l < f){ 
            cout << l_hash << endl;
            l +=4;
            }
            else if( f < l){
            cout << f_hash << endl;
            f += 4;
            }
  
        }
    }
return 0;
}
