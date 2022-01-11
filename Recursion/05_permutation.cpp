#include <bits/stdc++.h>
using namespace std;
void per(string input,string output){
    if(input.length()==0){
            cout<<output<<endl;
        return;
    }
    string op = output;
    string op2 = output;
    op.push_back(input[0]);
    op2.push_back(toupper(input[0]));
    input.erase(input.begin()+0);
}
int main(){
    string input  = "abc";
    string output = " ";
    per(input,output);
    return 0;
}