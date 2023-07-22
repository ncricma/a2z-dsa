#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

// stack --> LIFO (last in first out)
void cStack(){
    stack<int> st;
    st.push(1);     // {1}
    st.push(2);     // {2, 1}
    st.push(3);     // {3, 2, 1}
    st.push(3);     // {3, 3, 2, 1}
    st.emplace(5);  // {5, 3, 3, 2, 1}

    cout << st.top();   // prints 5   'st[2] is invalid'
    
    st.pop();           // st looks like {3, 3, 2, 1}
    cout <<st.top();    // 3
    cout << st.size();  // 4
    cout << st.empty(); 

    stack<int> st1, st2;
    st1.swap(st2);

    // tc of all operations is O(N)
}

int main() {
int t; cin >> t;
while(t--){
    cStack();
}

    return 0;
}