#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

// FIFO-->(first in first out)
void cQueue(){
    queue<int> q;
    q.push(1);      // {1}
    q.push(2);      // {1, 2}
    q.emplace(4);   // {1, 2, 4}

    q.back() += 5;  // 5 is added to last element

    cout << q.back();   // prints 9

    // q is {1, 2, 9}
    cout << q.front();  // prints 1

    q.pop();    // {2, 9}

    cout<< q.front(); // prints 2

    // size, swap empty same as sack
}

int main() {
int t; cin >> t;
while(t--){
    cQueue();
}

    return 0;
}