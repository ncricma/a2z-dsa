#include<bits/stdc++.h> 
using namespace std; 

int countD(int n){
    int ans = 0; 
    while(n>0){
        int lastDigit = n%10;   // this can be removed 
        ans++;
        n = n/10;
    } 
    return ans; 
}
// tc = O(log10(N)) as the division is happening by 10
// if its divided by 2 then log2(N) = tc 

int countD2(int n){
    int cnt = (int)(log10(n) +1);
    return cnt; 
}

int main(){
    int n;
    cin >> n; 
    cout << countD(n) << endl;
    cout << countD2(n) << endl;
}