#include <iostream>
using namespace std;

int main()
{
    int n,temp;
    cin >> n;;
    for(int i=n;i>=1;i--)
    {
        int temp = n-i;
        for(int j=1;j<=temp;j++)cout <<" ";
        for(int j=1;j<=i;j++) cout <<"*";
        cout << endl;
    }
}