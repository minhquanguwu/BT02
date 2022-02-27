#include <iostream>
#include <cmath>
using namespace std;

int GCD(int x, int y)
{
    int gcd=1;
    for(int i=2;i<=min(x,y);i++)
        if(x%i==0 && y%i==0) gcd = i;
    return gcd;
}
int LCM(int x, int y)
{
    int lcm = max(x,y);
    while(lcm%x!=0 || lcm%y!=0) lcm+=max(x,y);
    return lcm;
}
int main()
{
    int x,y;
    cin >> x >>y;
    cout << LCM(x,y);
}