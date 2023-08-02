#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

// Reverse an array using recursion 

// using 2 pointers
void solve(int l, int arr[], int r){    // take r=n-1
    if(l>=r) return ;
    swap(arr[l], arr[r]);
    solve(l+1, arr, r-1);   
}

// using 1 pointer
void revArr(int i,int arr[], int n ){
    if(i>= n/2) return ;
    swap(arr[i], arr[n-i-1]);
    revArr(i+1, arr, n);
}

int main() {
    int t; cin >> t;
    int  arr[5] = {1, 2, 3, 4, 5};
    
    while(t--){
    // solve(0, arr, 4);   // take r = n-1
    revArr(0, arr, 5);
    }

    for(auto x:arr){
        cout << x << " ";
    }

    return 0;
}