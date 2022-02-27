#include <iostream>
using namespace std;

int main()
{
    int n,temp;
    cin >> n;
    int star = 1+(n-1)*2;
    for(int i=1;i<=n;i++)
    {
        temp = 1+(i-1)*2;
        temp = (star - temp)/2;
        for(int j=1;j<=temp;j++) cout <<" ";
        for(int j=1;j<=(1+(i-1)*2);j++)cout<<"*";
        for(int j=1;j<=temp;j++) cout <<" ";
        cout << endl;
    }
}