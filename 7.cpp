#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a;
    cout << a << " ";
    while (1>0){
        cin >> b;
        if(b<0) {
            cout << b;
            break;
        }
        if(b!=a){
            cout << b << " ";
            a = b;
        }
    }
}