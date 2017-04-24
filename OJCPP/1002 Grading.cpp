//
// Created by Administrator on 2017/4/24.
//

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    double P,T,G1,G2,G3,GJ,ans;
    while(~scanf("%lf %lf %lf %lf %lf %lf",&P,&T,&G1,&G2,&G3,&GJ))
    {
        if(fabs(G1-G2)<=T) ans=(G1+G2)/2;
        else if(fabs(G3-G1)<=T&&fabs(G3-G2)>T) ans=(G3+G1)/2;
        else if(fabs(G3-G2)<=T&&fabs(G3-G1)>T) ans=(G3+G2)/2;
        else if(fabs(G3-G1)<=T&&fabs(G3-G2)<=T) ans=max(G1,max(G2,G3));
        else ans=GJ;

        printf("%.1lf\n",ans);
    }
    return 0;
}