#include <bits/stdc++.h>
using namespace std;
int power(int x , int y)
{
    if(y==0){
        return 1;
    }
    return pow(x, y);
}
int main()
{
    int x = 2;
    int y = 3;
    cout<<power(x,y);
    return 0;
}