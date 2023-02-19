#include<bits/stdc++.h>
using namespace std;
using namespace placeholders;


int  main(){

    int n ,total=0 ;
    cin >> n;
    string s;
    map<string,int>mp;
    mp.insert({"Tetrahedron",4});
    mp.insert({"Cube",6});
    mp.insert({"Octahedron",8});
    mp.insert({"Dodecahedron",12});
    mp.insert({"Icosahedron",20});

    vector<string>vs;
    for(int i=0; i<n; i++){
        cin >> s;
        vs.push_back(s);
        total += mp.at(s);
    }
    cout << total;
    
return 0;
}
