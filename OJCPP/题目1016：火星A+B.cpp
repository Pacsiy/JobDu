//
// Created by AlvinZH on 2017/5/24.
// Copyright (c) AlvinZH. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;

const int Prime[26]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101};

int main()
{
    string s1,s2;
    int num1[26],num2[26],ans[26];
    while(cin>>s1>>s2)
    {
        if(s1=="0"&&s2=="0") break;
        memset(num1,0, sizeof(num1));
        memset(num2,0, sizeof(num2));
        memset(ans,0, sizeof(ans));
        int index1=1;
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]!=',')
            {
                num1[index1]=num1[index1]*10+(s1[i]-'0');
            }
            else index1++;
        }
        int index2=1;
        for(int i=0;i<s2.length();i++)
        {
            if(s2[i]!=',')
            {
                num2[index2]=num2[index2]*10+(s2[i]-'0');
            }
            else index2++;
        }
        //for(int i=1;i<=index1;i++) cout<<num1[i]<<endl;
        //for(int i=1;i<=index2;i++) cout<<num2[i]<<endl;
        int index=max(index1,index2);
        for(int i=index;i>0;i--)
        {
            ans[i]=ans[i]+num1[index1]+num2[index2];
            while(ans[i]>=Prime[index-i])
            {
                ans[i]-=Prime[index-i];
                ans[i-1]++;
            }
            if(index1>0)
                index1--;
            if(index2>0)
                index2--;
        }
        if(ans[0]!=0) cout<<ans[0]<<",";
        for(int i=1;i<index;i++)
            cout<<ans[i]<<",";
        cout<<ans[index]<<endl;
    }
}