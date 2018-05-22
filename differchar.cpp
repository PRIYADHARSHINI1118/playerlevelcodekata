#include<iostream>
using namespace std;
#include<string.h>
int main() 
{
	char str1[50],str2[50];
	int i,n1,n2,count=0;
	cout<<"enter the two string"<<endl;
	cin>>str1>>str2;
	n1=strlen(str1);
	n2=strlen(str2);
	if(n1==n2)
	{
	for(i=0;i<n1;i++)
	{
	if(str1[i]==str2[i])
	{
	count=count+0;
	}
	else
	{
	count=count+1;
	}
}
if(count==1)
{
cout<<"yes";
}
else
{
cout<<"no";
}
}
else
{
cout<<"no";
}
return 0;
}
