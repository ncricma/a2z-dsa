#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

// Print all divisors 

void printDiv(int n){           // tc: O(N)
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cout << i << " ";
        }
    }
    cout << endl;
}


// tc: O(sqrt(N)) + O(n) where n is no. of factors
void printDiv2(int n){      
    vector<int> ans;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i ==  0){
            ans.push_back(i);
            if(n/i != i ){
                ans.push_back(n/i);
            }
        }
    }
    sort(ans.begin(), ans.end());
    for (auto it: ans){
        cout << it << " ";
    }
}



int main() {
    int t; cin >> t;
    printDiv(t);
    printDiv2(t);

    return 0;
}