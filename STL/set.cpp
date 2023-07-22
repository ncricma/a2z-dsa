#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

// elements are sorted and unique
// its a tree DS
void cSet(){
    set<int> st;
    st.insert(1);   //{1}  
    st.emplace(2);  //{1, 2}
    st.insert(2);   //{1, 2}
    st.insert(4);   //{1, 2, 4}
    st.insert(3);   //{1, 2, 3, 4}
    st.insert(5);   //{1, 2, 3, 4, 5}

    // Functionality of insert in vector can be used 
    // also, that only increases efficiency.

    // begin, end, rbegin, rend, size, empty, swap 
    // are same as those earlier

    //{1, 2, 3, 4, 5}
    auto it = st.find(3);
    // it returns an iterator which points to the 
    // position of the element which is searched.
    // If not present then, it returns the element 
    // just after the last element 

    //{1, 2, 3, 4, 5}
    auto x = st.find(6);

    //{1, 4, 5}
    st.erase(5);        // takes logN

    int cnt = st.count(1);  // gives 1 or 0

    auto y = st.find(3);
    st.erase(it);   // takes constant time

    // {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2);     
    // after erase {1, 4, 5} [first, last]

    // lower_bound and upper_bound function works in the same way 
    // as in vector it does. 

    // This is the syntax
    auto it3 = st.lower_bound(2);
    auto it4 = st.upper_bound(3);
}

int main() {
int t; cin >> t;
while(t--){
    cSet();
}

    return 0;
}