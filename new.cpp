#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a , sum = 0;
    vector<int> vi;
    for(int i=0; i<3; i++){
        cin >> a;
        vi.push_back(a);
    }
    sort(vi.begin(),vi.end());
    int res1 = vi[2] - vi[1];
    int res2 = vi[1] - vi[0];

    sum =res1 + res2;
    cout << sum << endl;
    return 0;
}