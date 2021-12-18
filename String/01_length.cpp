#include <bits/stdc++.h>
using namespace std;
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
    cout<<st<<endl;
    cout<<getl(st);
    return 0;
}