#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,a[10],i,c,j,sum=0,r;
    cin>>n;
     while (n>0)
     {
         r=n%10;
         a[i] = n%10;
        n = n/10;
        cout<<a[i]<<endl;
       i++;
     }
    for(j=0;j<i;j++)
    {
      sum=sum+(a[j]*a[j]);
    }
cout<<sum;
 return 0;
}
 
