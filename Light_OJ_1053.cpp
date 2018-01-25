#include<iostream>
#include<cmath>
#include<stdio.h>

using namespace std;

int main()
{
    int a,b,c,f,r;
    int T,t;
    cin>>T;
    for(t=1;t<=T;t++)
{
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        f=b*b+c*c;
        r=a*a;
    }
    else if(b>a && b>c)
    {
        f=a*a+c*c;
        r=b*b;
    }
    else if(c>b && c>a)
    {
        f=b*b+a*a;
        r=c*c;

    }
     if(f==r)
    {
        printf("Case %d: yes\n",t);
    }
    else
    {
        printf("Case %d: no\n",t);
    }
}

return 0;
}
