// sum of first N numbers using recursion 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

// parameterized way 
void solve(int i,int sum){
   if(i<1){
    cout << sum ;
    return ;
   }
   else{
    solve(i-1, sum+i);
   }
}

// functional way 
int fun(int n){
    if(n==0) return 0;
    return n + fun(n-1);
}

int main() {
    int t; cin >> t;
    while(t--){
    // solve(4, 0);
    cout << fun(4) << endl;
    }

    return 0;
}