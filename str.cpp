#include<bits/stdc++.h>
using namespace std;

int  main(){
    int n , a ,crime, untreated = 0, hired = 0, res;
    cin >> n;

    vector<int> vi;
    for(int i=0; i<n; i++){
        cin >> a;
        vi.push_back(a);
    }

    for(int i=0; i<n ;i++){
        if( vi[i] < 0){

           crime = hired - abs(vi[i]);

           if( crime < 0){
                untreated += abs(crime);
                crime = 0;
           }
           else{
                hired -= abs(vi[i]);
                crime = 0;
           }

        }
        else if( vi[i] >=0){
            hired += vi[i];
        }
    }
    cout <<  untreated << endl;
    
}
