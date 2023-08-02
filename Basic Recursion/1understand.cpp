#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve(){
    cout << 1 << endl;
    solve();    
// no stopping condition so it's lead to stack-overflow
}

// Base condition: where the recursion stops 
int cnt = 0;
void print(){
    if(cnt == 4) return;    // base condition 
    cout << cnt << endl;
    cnt++;
    print();
}

int main() {
    int t; cin >> t;
    while(t--){
    solve();
    // print();
    }

    return 0;
}