#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void cList(){
    list<int> ls;

    ls.push_back(2);        // {2}
    ls.emplace_back(2);     // {2, 2}

    ls.push_front(5);       // {5, 2, 2}
    ls.emplace_front(10);   // {10, 5, 2, 2}    

    // rest functions same as vector 
    // begin , end, rbegin, rend, clear, insert, size, swap
    
}

int main() {
int t; cin >> t;
while(t--){
    cList();
}

    return 0;
}