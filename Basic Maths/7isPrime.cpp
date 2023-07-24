#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

// check for prime 
// primes: which has exaclty 2 factors, 1 and itself 
string isPrime(int n){      // tc: N
    int cnt = 0; 
    for(int i=1; i<=n ; i++){
        if(n%i==0){
            cnt++;
        }
    }
    if(cnt == 2) return "TRUE";
    else return "FALSE";
}

bool isPrime2(int n){
    int cnt=0; 
    for(int i=1; i*i<=n; i++){
        if(n%i==0) {
            cnt++; 
            if((n/i) != i) cnt++;
        }
    }
    if(cnt == 2) return true; 
    else return false; 
}


int main() {
int t; cin >> t;
cout << isPrime(t);
cout << isPrime2(t);

    return 0;
}