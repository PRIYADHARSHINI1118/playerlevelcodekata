#include <iostream>
#include <string>
using namespace std;
class isomorphic
{
    int n1,n2,i,p=5,c=0,ch=0;
    string s1,s2,s3={" "};
    public:
    isomorphic()
    {
    get();
    cout<<"OUTPUT"<<endl;
    check();
    }
        void get()
        {cout<<"INPUT"<<endl;cin>>s1>>s2;}
        void check()
        {
            n1=s1.length();
            n2=s2.length();
            if(n1==n2)
            {
            for(i=0;i<n1;i++)
            { 
            p=s3.find(s1[i]);
            if(p==-1)
            {
            s3[ch]=s1[i];
            ch++;
            s3[ch]=s2[i];
            ch++;
            }
            else
            {
            if(!(s3[ch-2]==s1[i]&&s3[ch-1]==s2[i]))
            {c++;}
            }
            }
            }
            else{c++;}
            if(c==0){cout<<"yes";}
            else{cout<<"no";}
        }
    };
int main()
{
isomorphic i;
return 0;
}
