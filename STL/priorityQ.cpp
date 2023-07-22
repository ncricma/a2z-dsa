#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

// the largest elements stays at the top 
// it is not a linear data sturcture
// it's a tree
void cPriorityQueue(){
    // Maximum heap 
    priority_queue<int> pq;
    pq.push(5);         // {5}
    pq.push(2);         // {5, 2}
    pq.push(8);         // {8, 5, 2}
    pq.emplace(10);     // {10, 8, 5, 2}

    cout << pq.top();   // prints 10

    pq.pop();   // {8, 5, 2}

    cout << pq.top();   // prints 8

    // size swap empty function same as others 

    // Minimum Heap 
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5);        // {5}
    pq1.push(2);        // {2, 5}
    pq1.push(8);        // {2, 5, 8}
    pq1.emplace(10);    // {2, 5, 8, 10}

    cout << pq1.top();  // prints 2

    // tc push,pop--> O(logN) , top--> O(1) 
}

int main() {
int t; cin >> t;
while(t--){
    cPriorityQueue();
}

    return 0;
}