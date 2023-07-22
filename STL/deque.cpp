#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void cDeque(){

    deque<int> dq;
    dq.push_back(2);
    dq.emplace_back(3);

    dq.push_front(5);
    dq.push_front(7);

    dq.pop_back();
    dq.pop_front();

    dq.back();
    dq.front();

    // rest functions same as vector 
    // begin, end, rbegin, rend, clear, insert, size, swap
}

int main() {
int t; cin >> t;
while(t--){
    cDeque();
}

    return 0;
}