#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

// give the Nth fibonacci number 
int f(int n){
   if(n<=1) return n;
   int last = f(n-1);
   int slast = f(n-2);
   return last + slast;
}

int main() {
    int t; cin >> t;
    while(t--){
        cout << f(4) << endl;
    }

    return 0;
}