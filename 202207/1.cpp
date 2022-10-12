#include<bits/stdc++.h>


using namespace std;
int main()
{
    int a,i,j,sum,num;
    string b,s;
    cin>>a;
    for(i=0; i<a; i++)
    {
        int k=0,c[4],mom,kid,mom1,mom2,kid1,kid2,coun=0,ss,t,e,f,bb,aa;
        cin>>b>>s;
          for(j=0; j<b.length(); j++)
        {
            if(b[j]=='/'||b[j]=='\0');
            else if(isdigit(b[j]))
            {
                c[k]=b[j]-'0';
                k++;
            }
            else{
               coun++;
                break;
            }

        }
        for(j=0; j<s.length(); j++)
        {
            if(s[j]=='/'||s[j]=='\0');
            else if(isdigit(s[j]))
            {
                c[k]=s[j]-'0';
                k++;
            }
            else{
                coun++;
                break;
            }

        }
        if(coun!=0){
             cout<<"Input format error."<<endl;
            break;
        }
        else{
        kid1=c[0]*c[3];
        mom1=c[1]*c[2];
        kid2=kid1+mom1;
        mom2=c[1]*c[3];
        sum=kid2/mom2;
        num=kid2-sum*mom2;
        if(num==0)
            cout<<sum<<endl;
        else{
            if(sum==0){
        aa=kid2;
        bb=mom2;
        while( bb!=0 )
        {
            t = bb;
            bb= aa%bb;
            aa = t;
        }
        if(aa==0)
            cout<<kid2<<"/"<<mom2<<endl;
             else
             cout<<kid2/aa<<"/"<<mom2/aa<<endl;
        }

        else{
        aa=num;
        bb=mom2;
        while( bb!=0 )
        {
            t = bb;
            bb= aa%bb;
            aa = t;
        }
        if(aa==0)
            cout<<sum<<" "<<num<<"/"<<mom2<<endl;
             else
            cout<<sum<<" "<<num/aa<<"/"<<mom2/aa<<endl;

        }
        }



        kid=c[0]*c[2];
        mom=c[1]*c[3];
        sum=kid/mom;
        num=kid-sum*mom;
        if(num==0)
            cout<<sum<<endl;
        else{
                    if(sum==0){
        aa=kid;
        bb=mom;
        while( bb!=0 )
        {
            t = bb;
            bb= aa%bb;
            aa = t;
        }
        if(aa==0)
            cout<<kid<<"/"<<mom<<endl;
             else
             cout<<kid/aa<<"/"<<mom/aa<<endl;

        }
        else{
        aa=num;
        bb=mom;
        while( bb!=0 )
        {
            t = bb;
            bb= aa%bb;
            aa = t;
        }
        if(aa==0)
            cout<<sum<<" "<<num<<"/"<<mom<<endl;
             else
            cout<<sum<<" "<<num/aa<<"/"<<mom/aa<<endl;

        }
        }


        }

        }



    }


