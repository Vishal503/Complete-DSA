#include <bits/stdc++.h>
using namespace std;
void reverse(char st[],int n){
    int s = 0;
    int e=n-1;
    while(s<e){
        swap(st[s++],st[e--]);
    }
}
int getl(char st[]){
    int count = 0;
    for(int i=0;st[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char st[20];
    cin>>st;
    
    int n = getl(st);
    reverse(st,n);
    cout<<st;
    return 0;
}