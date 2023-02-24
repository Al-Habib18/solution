#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, sum = 0,a = 0;
    cin >> n >> k;

    vector<int> vi;
    for(int i=0; i<=n; i++){
        a = a + (5*i);
        vi.push_back(a); // 0 5 15 30 50 75 105 140 180 225 275
    }

    int min = 4*60 ;
    int rem = min - k;
    int problem;

    for(int i=1; i<= n; i++){
        if( vi[i] > min){
            problem = i-1;
            break;
        }
        else if(vi[i] > rem ){
            problem = i-1;
            break;
        }
        else{
            problem = i;
        }
    }

    cout << problem <<endl;
}