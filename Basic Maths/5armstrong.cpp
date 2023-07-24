#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

// Armstrong number: sum of the cubes of the digits 
// of a number is equal to the number itself

string isArmstrong(int n){
    int dup = n; 
    int sum = 0; 
    while(n>0){
        int ld = n%10; 
        sum = sum + (ld*ld*ld);
        n = n/10; 
    }

    if(sum == dup) return "Armstrong";
    else return "Not armstrong";
}



int main() {
int t; cin >> t;
cout << isArmstrong(t);


    return 0;
}