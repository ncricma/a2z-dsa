#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void cVector(){

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);

    vector<pair<int, int>> x;
    x.push_back({2,4});
    x.emplace_back(1,3);

    vector<int> y(5,100);

    vector<int> z(5);

    vector<int> v1(5,20);
    vector<int> v2(v1);     // v2 is copy of v1


    // this will print the memory address 
    vector<int>::iterator it = v.begin();   

    it++;
    cout << *(it) << " ";   
    // so we use pointer to access the element
    cout << endl;

    it = it + 2;
    cout << *(it) << " ";
    cout << endl;

    vector<int>::iterator it1 = v.end();    // this will point after the last element
    it1--;
    cout<< *(it1) << " ";
    cout << endl;

    // vector<int>::iterator it2 = v.rend();
    // vector<int>::iterator it2 = v.rbegin();

    cout << v[0] << " " <<v.at(0);
    cout << v.back() << " ";
    cout << endl;

    for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    for(auto it = v.begin(); it!=v.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    for(auto c: v){         // for each loop 
        cout << c << " ";
    }

    // {10, 20, 12, 23}
    v.erase(v.begin()+1);       // {10, 12, 23}
    // {10, 20, 12, 23, 35}
    v.erase(v.begin()+2, v.begin()+4); // {10, 20, 35} [start, end]

    // Insert function 
    vector<int>v(2, 100);           // {100, 100}
    v.insert(v.begin(), 300);       // {300, 100, 100}
    v.insert(v.begin()+1, 2, 10);   // {300, 10, 10, 100, 100}

    vector<int> copy(2, 50);        // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end());  
    // {50, 50, 300, 10, 10, 100, 100}

    cout << v.size();

    // {10, 20}
    v.pop_back();   //{10}

    // v1->{10, 20} and v2->{30, 40}
    v1.swap(v2);    // v1->{30, 40} and v2->{10, 20}

    v.clear(); // earse the entire vector
    
    cout << v.empty();

}

int main() {
int t; cin >> t;
while(t--){
    cVector();
}

    return 0;
}