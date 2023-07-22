#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void cMultiset(){
    // Everything is same as set 
    // only stores duplicates elements also 

    multiset<int> ms;
    ms.insert(1);       // {1}
    ms.insert(1);       // {1, 1}
    ms.insert(1);       // {1, 1, 1}

    ms.erase(1);        // all 1's erased

    int cnt = ms.count(1);      

    // only a single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1),next(ms.find(1),2));

    // rest all functions same as set

}

int main() {
int t; cin >> t;
while(t--){
    cMultiset();
}

    return 0;
}