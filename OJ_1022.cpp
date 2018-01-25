#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

int main()
{
    double R,Pi,A;
    Pi = 2*acos(0.0);
    int T,t;
    t=1;
    cin>>T;
   while(t<=T)
    {
     cin >> R;
     A= ((R+R)*(R+R))- (Pi*R*R);
     printf("Case %d: %.2lf\n",t,A);
     t++;
    }
    return 0;
}
