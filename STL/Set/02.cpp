//lower bound 
#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 

    set<int> s; 
    s.insert(1); 
    s.insert(4); 
    s.insert(2); 
    s.insert(5); 
    s.insert(6); 

    auto it = s.lower_bound(2); 
    cout << (*it) << endl; 

    it = s.lower_bound(3);
    cout << (*it) << endl; 

    it = s.lower_bound(8); 
    cout << (*it) << endl; 

    return 0; 
} 