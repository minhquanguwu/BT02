#include <iostream>
using namespace std;

int money (int n)
{
    int sum=0;
    if(n<100) return 0;
    if(n>200) {
        sum+=((n-200)*25000);
        int x = n - 200;
        n = n-x;
    }
    if(n>150) {
        sum+=((n-150)*20000);
        int x = n - 150;
        n = n-x;
    }
    if(n>100) {
        sum+=((n-100)*16000);
        int x = n - 100;
        n = n-x;
    }
    sum +=(n*12000);
    return sum;
}
int tax (int n)
{
    int sum = n*9/100;
    n=n*91/100;
    if(n>2e6){
        int k = n-2e6;
        sum += k*20/100;
        n-=k;
    }
    if(n>15e5){
        int k = n-15e5;
        sum += k*15/100;
        n-=k;
    }
    if(n>1e6){
        int k = n-1e6;
        sum += k*10/100;
        n-=k;
    }
    return sum;    
}
int main()
{
    int n;
    cin >> n;
    cout << money(n) << endl;
    cout << money(n)-tax(money(n)) << endl;
}