#include<bits/stdc++.h>
using namespace std;

int main()
{
  int max=0,sum,f=1,element;
  cout<<"Enter No.>3 :)";
  cin>>element;
  if(element<3)
  {
  cout<<"please enter a No. greater then 3";
  return 0;
  }
int arr[element][element];

for(int i=0;i<element;i++) //for all row
{
for(int j=0;j<element;j++)
{
  cin>>arr[i][j];
}
}
for (int i=1;i<5;i++)
{
for (int j=1;j<5;j++)
{
sum=arr[i][j]+arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1]+arr[i+1][j-1]+arr[i+1][j]+arr[i+1][j+1];
if (f==1)
{
  max=sum;
  f=0;
}
if(sum>max)
{
max=sum;
}
}
}
cout<<max;









  return 0;
}
 