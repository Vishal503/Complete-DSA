#include <bits/stdc++.h>
using namespace std;
void power(string input,string output)
{
    if(input.empty()){
            cout<<output<<endl;
        return;
    }
    power(input.substr(1),output+input[0]);
    power(input.substr(1),output);
}
int main(){
    string output = " ";
    string input = "abcd";
    power(input,output);
    return 0;
}