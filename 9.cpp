#include <iostream>
#include <string>
using namespace std;
int main()
{
  int a,b,i,count;
  cout<<"enter the a value"<<endl;
  cin>>a;
  cout<<"enter the b value"<<endl;
  cin>>b;
  while(a<b)
{
     count=0;
        for(i=2;i<a/2;i++)
      {
          if(a%i==0)
          {
              count++;
              break;
          }
            }
      if(count==0)
       cout<<a;
       ++a;
     }
     return 0;           
}
