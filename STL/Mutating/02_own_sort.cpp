#include <bits/stdc++.h>
using namespace std;
struct point{
    int x,y;
};
bool my(point p1,point p2){
    return (p1.x<p2.x);
}
int main(){
    point arr[] = {{3,10},{1,2},{4,1}};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,my);
    for(auto i:arr){
        cout<<i.x<<" "<<i.y<<endl; 
    }
    return 0;
}