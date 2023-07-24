#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back


int revNum(int n){
    int ans = 0;
    while(n>0){
        int lastD = n%10; 
        ans = (ans *10) + lastD; 
        n/=10;
    }
    return ans ;
}


int main() {
int t; cin >> t;
cout << revNum(t);

    return 0;
}