#include  <iostream>
using namespace std;
int  main()
{
  int  i , n , x[50] ,s,ar[50];
  cout<<"Enter the number of elements: " ;
  cin>>n ;
  cout<<"Enter the elements: \n" ;
  for(i=0 ; i<n ; i++)
    cin>>ar[i] ;
    cout<<"Enter the elements: \n" ;
cin>>s;
   for(i=0;i<n;i++)
{
x[i]=ar[n+i-s];
if(i+s>=n-1)
{
x[i]=ar[i-s];
}
}
  cout<<"New array is as shown: \n" ;
  for(i=0 ; i<n ; i++)
    cout<<x[i] ;
 
  return 0;
}
