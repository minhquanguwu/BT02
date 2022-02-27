#include <iostream>

using namespace std;
void check(int a,int b,int c)
{
    if(a+b>c && b+c>a && c+a>b)
    {
        if(a*a+b*b==c*c || a*a+c*c==b*b || c*c+b*b==a*a)cout <<"tam giac vuong";
        else if(a==b || b==c || c==a)
        {
            if(a==b && b==c) cout <<"tam giac deu";
            else cout << "tam giac can";
        }
        else cout << "tam giac thuong";
    }
    else cout << "khong phai tam giac";
}
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    check(a,b,c);
    return 0;
}
