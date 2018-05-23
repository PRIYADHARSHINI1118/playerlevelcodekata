#include <iostream>
#include<string>
using namespace std;
 int main()
 {
     int n;
     char s[10],i; 
     cin>>n;
     for(i=0;i<n;i++)
     {
         cin>>s[i];
     }
     for(i=0;i<n;i++)
     {
         switch(s[i])
         {
             case 'a':
             cout<<"a";
             break;
             case 'e':
             cout<<"e";
             break;
             case 'i':
             cout<<"i";
             break;
             case 'o':
             cout<<"o";
             break;
             case 'u':
             cout<<"u";
             break;
         }
     }
     for(i=0;i<n;i++)
     {
         switch(s[i])
         {
             case 'a':
             
             break;
             case 'e':
             
             break;
        
             case 'i':
             
             break;
             case 'o':
             break;
             case 'u':
             break;
             
             break;
             default:
             cout<<s[i];
             break;
         }
     }
     
    return 0;
}
