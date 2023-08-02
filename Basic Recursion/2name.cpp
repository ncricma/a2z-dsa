#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

// print name N times using recursion 
void solve(int i, int n){
    if(i>n) return ;
    cout << i << " Naveen" << endl; 
    solve(i+1, n);
}

// print 1 to N linearly 
// printt n to 1 
void print(int n){
    if(n < 1) return ; 
    cout << n << endl;
    print(n-1);
}

// print 1 to n linearly using BACK TRACKING 
void printB(int i, int n){
    if(i<1) return ;
    printB(i-1, n);
    cout << i << endl;
}

// print n to 1 BT
void printRB(int i, int n){
    if(i>n) return ;
    printRB(i+1, n);
    cout << i << endl; 
}



int main() {
    int t; cin >> t;
    while(t--){
    // solve(1, 5);
    // print(4);
    // printB(4, 4);
    printRB(1, 4);
    }

    return 0;
}