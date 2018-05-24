#include <iostream>
#include <string>
using namespace std;
class RomanLetters
{
    int n,i,v=0,o=1,p=5,t=10;
    string s;
    char c;
    public:
    RomanLetters()
    {get();
    cout<<"OUTPUT"<<endl<<convert();
        }
        void get()
        {cout<<"INPUT"<<endl;cin>>s;}
        int convert()
        {
            n=s.length();
            for(i=0;i<n;i++)
            {
                c=tolower(s[i]);
                switch(c)
                {
                    case 'i':v=v+1;o++;break;
                    case 'v':if(o==1){v=v+5;}else{v=v+3;};break;
                    case 'x':if(o==1){v=v+10;}else{v=v+8;};break;
                    }
                }
                return v;
            }
    };
int main()
{
    RomanLetters rl;
return 0;
}
