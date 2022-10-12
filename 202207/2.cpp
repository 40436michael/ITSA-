#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,i,j;
    string s;
    cin>>a;
    for(i=0;i<a;i++){
        if(i==0){
            getline(cin.ignore(1,'\n'),s);
        }
        else{
            getline(cin,s);
        }
        for(j=0;j<s.length();j++){
            if(isalpha(s[j])){
                if(islower(s[j])){
                    s[j]=toupper(s[j]);
                }
                else{
                    s[j]=tolower(s[j]);
                }
                if(s[j]=='y'||s[j]=='Y'||s[j]=='z'||s[j]=='Z'){
                    s[j]=s[j]-26;
                }
                s[j]=s[j]+2;
                cout<<s[j];
            }
            else if(isdigit(s[j])){
                if(s[j]=='6'||s[j]=='7'||s[j]=='8'||s[j]=='9')
                s[j]=s[j]-9;
                s[j]=s[j]+4;
                cout<<s[j];
            }
            else
                cout<<s[j];
        }
        cout<<endl;
    }
    return 0;
}
