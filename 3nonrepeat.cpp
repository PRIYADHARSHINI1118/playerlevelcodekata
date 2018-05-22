#include <iostream>

using namespace std;

int main()
{
  int arr[10],i,j,count=0;
  for(i=0;i<10;i++)
  {
      cin>>arr[i];
  }
  for(i=0;i<10;i++)
  {
      for(j=0;j<10;j++)
      {
            if (i != j && arr[i] == arr[j])
                break;
      }
        if (j == 10)
        {
            count++;
            if(count==3)
    {
        cout<<arr[i];
        break;
    }
        }
    
  }
    return 0;
}
