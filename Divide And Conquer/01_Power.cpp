#include <bits/stdc++.h>
using namespace std;
int power(int x , unsigned int y)
{
    if(y==0){
        return 1;
    }
    int temp = power(x,y/2);
    if(y%2==0){
        return temp*temp;
    }
    else{
        return x*temp*temp;
    }
}
int main()
{
    int x = 2;
    int y = 3;
    cout<<power(x,y);
    return 0;
}