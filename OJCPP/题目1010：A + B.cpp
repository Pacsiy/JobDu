//
// Created by AlvinZH on 2017/4/30.
// Copyright (c) AlvinZH. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;

vector<string> split(string& str,const char* c)
{
    char *cstr,*p;
    cstr = new char[str.size()+1];
    strcpy(cstr,str.c_str());

    vector<string> res;
    p = strtok(cstr,c);
    while(p!=NULL)
    {
        res.push_back(string(p));
        p = strtok(NULL,c);
    }
    delete[] cstr;

    return res;
}
int wordTOnum(string s)
{
    if(s=="zero") return 0;
    else if(s=="one") return 1;
    else if(s=="two") return 2;
    else if(s=="three") return 3;
    else if(s=="four") return 4;
    else if(s=="five") return 5;
    else if(s=="six") return 6;
    else if(s=="seven") return 7;
    else if(s=="eight") return 8;
    else if(s=="nine") return 9;
}

int main()
{
    int x,y;
    bool afterAdd;
    string str;
    const char *delims=" ";
    while(getline(cin,str))
    {
        x=y=0;
        afterAdd=false;
        vector<string> s;
        s=split(str,delims);

        if(s[0]=="zero"&&s[2]=="zero") break;

        int len=s.size();
        for(int i=0;i<len-1;i++)
        {
            if(s[i]=="+") afterAdd=true;
            else
            {
                if(afterAdd) x=x*10+wordTOnum(s[i]);
                else y=y*10+wordTOnum(s[i]);
            }
        }
        cout<<x+y<<endl;
    }
}