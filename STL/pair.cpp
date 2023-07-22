#include<bits/stdc++.h>
#include<utility>       // for pair
using namespace std;
#define ll long long
#define pb push_back

void cPair(){
    pair<int,int> p = {1,3};
    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> x = {1, {3, 5}};
    cout << x.first << " " << x.second.first << " "<< x.second.second << " ";

    pair<int, string> arr[] = {{1,"Ankit"}, {2, "Naveen"}, {3,"Sachin"}, {4, "Vasu"} };
    cout << arr[1].second;

}

int main() {
int t; cin >> t;
while(t--){
    cPair();
}

    return 0;
}