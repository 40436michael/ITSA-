#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,i;
    string s;
    cin>>a;
    for(i=0;i<a;i++){
        if(i==0)
            getline(cin.ignore(1,'\n'),s);
        else
            getline(cin,s);
        cout<<s<<endl;
    }
    return 0;
}
