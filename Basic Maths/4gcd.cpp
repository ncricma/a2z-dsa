#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

// find gcd
// tc = O(min(n,m))
int printGCD(int n, int m){
    int j = min(n, m);
    int ans = 0;
    for(int i=1; i<=j; i++){
        if(n%i==0 && m%i==0){
            ans = i; 
        }
    }
    return ans; 
}

// Euclidean Algorithm 
// gcd(a,b) = gcd(a-b, b)  where a>b
// gcd(a,b) = gcd(a%b, b)  where a>b (more better)
// tc = O(log(phi)(min(a,b))
int printGCD2(int a, int b){    // not work if either input is 0
    while(a>0 && b>0){
        if(a>b) a = a%b;
        else b%=a;
    }
    if(a==0) return b;
    return a; 
}

int main() {
int x, t; cin >> x >> t;
cout << printGCD(x, t) << endl ;
cout << printGCD2(x, t);

    return 0;
}