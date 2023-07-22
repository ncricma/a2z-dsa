#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'

// {key, value} pair 
// where keys are unique but values can be same  
// stores uique keys in sorted order (similar to set ds)
void cMap(){
    map<int, int> mp1;

    map<int , pair<int, int>> mp2;
    map<pair<int,int>, int> mp3;

    mp1[1] = 2;         // {{1,2}}
    mp1.emplace(3, 1);  // {{1,2}, {3,1}}
    mp1.insert({2,4});  // {{1,2}, {2,4}, {3,1}}

    mp3[{2,3}] = 10;

    for(auto it: mp1){
        cout << it.first << " " << it.second << " " << endl;
    }

    cout << mp1[1] << endl;
    cout << mp1[5] << endl;

    auto it1 = mp1.find(3);
    cout << (*it1).second;
    cout << (*it1).first;
    cout << endl;

    cout << it1 -> second;  // this also gives the same value as above  

    auto it2 = mp1.find(5);

    // This is the syntax
    auto it3 = mp1.lower_bound(2);
    auto it4 = mp1.upper_bound(3);

    // erase swap size empty are same as above

}

int main() {
int t; cin >> t;
while(t--){
    cMap();
}

    return 0;
}