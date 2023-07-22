#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back


bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true; 
    if(p1.second > p2.second) return false;

    // they are same 
    if(p1.first > p2.first) return true;
    return false;
}

void solve(){
    int a, n;
    vector<int> v;


    sort(a, a+n);
    sort(v.begin(), v.end());

    sort(a+2, a+5);
    sort(a, a+n, greater<int>()); // descending order

    pair<int, int> a[] = {{1,2}, {2,1}, {4,1}};
    // MY WAY
    // sort it according to second element 
    // if second element is same, then sort
    // it according to first element but in descending

    sort(a, a+n, comp);
    // { {4,1}, {2,1}, {1,2}}

    int num = 7;
    int cnt = __builtin_popcount(num);

    ll x = 12321312441;
    int cnt1 = __builtin_popcountll(x);

    string s = "123";
    sort(s.begin(), s.end());

    // for this start from the sorted 
    do {
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));

    int maxi = *max_element(v.begin(), v.end());

}

int main() {
int t; cin >> t;
while(t--){
    solve();
}

    return 0;
}