#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num,k=0;
    scanf("%d",&num);
    k=num;
    while(num!=0)
    {
        string s;
        if(k==num) getline(cin.ignore(1,'\n'),s);
        else getline(cin,s);
        for(int i=0;i<s.length();i++)
        {
            if(isalpha(s[i]))
            {
                if(isupper(s[i])) s[i]=tolower(s[i]);
                else if(islower(s[i])) s[i]=toupper(s[i]);
                if(s[i]=='Y'||s[i]=='y'||s[i]=='z'||s[i]=='z') s[i]-=24;
                else s[i]+=2;
            }
            if(isdigit(s[i]))
            {
                if(s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9') s[i]-=6;
                else s[i]+=4;
            }
        }
        cout<<s<<endl;
        num--;
    }
    return 0;
}
