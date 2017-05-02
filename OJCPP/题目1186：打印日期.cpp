//
// Created by AlvinZH on 2017/5/2.
// Copyright (c) AlvinZH. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

//判断闰年
#define ISYEAP(x) x%100!=0&&x%4==0||x%400==0?1:0

int DayOfMonth[13][2]={
        0,0,
        31,31,
        28,29,
        31,31,
        30,30,
        31,31,
        30,30,
        31,31,
        31,31,
        30,30,
        31,31,
        30,30,
        31,31
};

int main()
{

    int y;
    int n;
    while(~scanf("%d %d",&y,&n))
    {
        for(int i=1;i<=12;i++)
        {
            if(n>DayOfMonth[i][ISYEAP(y)])
                n-=DayOfMonth[i][ISYEAP(y)];
            else
            {
                printf("%04d-%02d-%02d\n",y,i,n);
                break;
            }
        }
    }
}