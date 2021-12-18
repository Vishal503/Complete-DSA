#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    s.insert(10);
    s.insert(4);
    s.insert(6);
    s.insert(12);
    for(auto itr = s.begin();itr!=s.end();itr++){
        cout<<" "<<*itr;
    }
    cout<<endl;
    for(auto itr = s.rbegin();itr!=s.rend();itr++){
        cout<<" "<<*itr;
    }
    cout<<endl;
    for(auto itr = s.cbegin();itr!=s.cend();itr++){
        cout<<" "<<*itr;
    }
    return 0;
}