#include <iostream>
#include <string.h>
using namespace std;
int main(){
     char str[20],tmp;
     int i,j;
     cout<<"Enter a string : ";
     cin>>str;
     cout<<"Original String:"<<str<<endl;
     for(i=0;i<strlen(str);i=i+2)
     {
     tmp = str[i];
     str[i] = str[i+1];
     str[i+1] = tmp;
     }
     cout<<"After Swap String:"<<str<<endl;
     return 0;
}
