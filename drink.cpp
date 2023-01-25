#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a;
    cin >> n;

    double answer, amount = 0;
    vector<int> vi;

    for(int i = 0; i<n; i++){
        cin >> a;
        vi.push_back(a);
    }

    for(int i= 0; i<n ; i++){
        amount += vi.at(i);
    }

    answer = amount/n;
    cout << answer;

    return 0;
}