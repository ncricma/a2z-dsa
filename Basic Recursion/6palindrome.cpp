// check if a string is palindrome 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

string palindrome(int i, string &s){
    if(i >= s.size()/2) return "True\n";
    if(s[i] != s[s.size()-i-1]) return "False\n";
    return palindrome(i+1, s);
}

int main() {
    int t; cin >> t;
    string s = "madam";
    string st = "21314";
    while(t--){
    cout << palindrome(0, s);
    cout << palindrome(0, st);
    }

    return 0;
}