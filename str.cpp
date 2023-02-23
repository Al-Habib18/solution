#include<bits/stdc++.h>
using namespace std;

int  main(){
    int n, a;
    int amazing = 0;
    cin >> n;   // number of contest

    vector<int> vi;
    for(int i=0; i<n; i++){
        cin >> a;
        vi.push_back(a);
    }
    
    int best = vi[0];
    int worst = vi[0];

    for(int i=1; i<n; i++){

        if( vi[i] > best){
            best = vi[i];
            ++amazing;
        }
        else if( vi[i] < worst){
            worst = vi[i];
            ++amazing;
        }
    }

    cout << amazing << endl;

}
