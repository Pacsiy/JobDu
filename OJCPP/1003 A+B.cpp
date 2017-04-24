//
// Created by Administrator on 2017/4/24.
//

#include <iostream>
using namespace std;

int main()
{
    string s1,s2;
    long long n1,n2;
    while(cin>>s1>>s2)
    {
        n1=0;n2=0;
        for(int i=0;i<s1.length();i++)
            if(s1[i]!=','&&s1[i]!='-')
                n1=n1*10+s1[i]-48;
        if(s1[0]=='-') n1=-n1;
        for(int i=0;i<s2.length();i++)
            if(s2[i]!=','&&s2[i]!='-')
                n2=n2*10+s2[i]-48;
        if(s2[0]=='-') n2=-n2;
        cout<<n1+n2<<endl;
    }
}
