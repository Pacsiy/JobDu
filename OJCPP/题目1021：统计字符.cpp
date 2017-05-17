//
// Created by AlvinZH on 2017/5/18.
// Copyright (c) AlvinZH. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    char p[5];
    char s[80];
    int sum[125];
    while(gets(p))
    {
        if(p[0]=='#') break;
        else
        {
            gets(s);

            memset(sum,0,sizeof(sum));
            for(int i=0;s[i]!='\0';i++)
                sum[s[i]]++;
        }
        for(int i=0;p[i]!='\0';i++)
            printf("%c %d\n",p[i],sum[p[i]]);
    }
}