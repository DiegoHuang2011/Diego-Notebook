#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    int t;
    cout<<"please type three positive numbers:";
    cin>>a>>b>>c;
    if (a>b)
    {
        t=a;
        a=b;
        b=t;
    }
    if (a>c)
    {
        t=a;
        a=c;
        c=t;
    }
    if (b>c)
    {
        t=b;
        b=c;
        c=t;
    }

}