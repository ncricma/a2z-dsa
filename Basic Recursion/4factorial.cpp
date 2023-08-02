// factorial of a number N (recursively)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int fact(int n){
    if(n==0 ) return 1;
    return n * fact(n-1);
}

int main() {
    int t; cin >> t;
    while(t--){
    cout << fact(6) << endl;
    }

    return 0;
}