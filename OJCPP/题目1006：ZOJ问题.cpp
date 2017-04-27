//
// Created by AlvinZH on 2017/4/27.
// Copyright (c) AlvinZH. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    char s[1005];
    int a,b,c;
    while(scanf("%s",s)!=EOF)
    {
        a=0;
        b=0;
        c=0;
        int i=0;
        while(s[i]=='o')
        {
            a++;
            i++;
        }
        if(s[i]!='z')
        {
            printf("Wrong Answer\n");
            continue;
        }
        i++;
        while(s[i]=='o')
        {
            b++;
            i++;
        }
        if(s[i]!='j')
        {
            printf("Wrong Answer\n");
            continue;
        }
        i++;
        while(s[i]=='o')
        {
            c++;
            i++;
        }
        if(s[i]!='\0')
        {
            printf("Wrong Answer\n");
            continue;
        }

        if(a*b==c&&b>0) printf("Accepted\n");
        else printf("Wrong Answer\n");
    }
}