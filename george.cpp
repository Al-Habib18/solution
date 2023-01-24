#include<iostream>
using namespace std;

int main(){
    int n;
    int r=0;
    int num = 0;
    cin >> n;
    int room[n][2];
    for(int i=0; i<n ;++i){
        for(int j =0; j<2 ;++j){
            cin >> room[i][j];
        }
    }

    for(int i = 0; i<n; ++i){
        r = room[i][1] - room[i][0];
        if( 2 <= r){
            ++num;
        }
    }
    cout << num;

    return 0;
}