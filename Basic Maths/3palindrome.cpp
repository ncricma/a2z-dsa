#include<bits/stdc++.h>
using namespace std; 

bool isPalindrome(int n){
    int revN = 0; 
    int dup = n; 
    while(n>0){
        int lastD = n%10; 
        revN = (revN * 10) + lastD;
        n = n/10;
    }

    if(dup == revN) return true; 
    else return false; 

}


int main(){
    int n ; cin >> n; 
    cout << isPalindrome(n);

}