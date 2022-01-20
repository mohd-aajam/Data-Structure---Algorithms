//for all cases time complexity is 0(n)
#include<iostream>
using namespace std;
int aajam(int a[],int n)  //pass parameter
{
    int res=-1,largest=0; //res is smallest,1st element is largest.
    for(int i=1;i<n;i++) //1st to last.
    {
        if(a[i]>a[largest])      //if current is greater then largest
       {
          res=largest;        //largest will be smallest.
         largest=i;          //current will be largest. 
       }
else if(a[i]!=a[largest]) //current is not largest.
  {
if(res==-1 || a[i]>a[res])  //res<i<largest.
  res=i;
  }
    }
  
       return res;
}
int main()
{
cout<<"Index of 2nd Largest element is ";
int a[]={2,3,5,44,3,4,2,3,22,2,1,2,34,5,654,3,2,23,33,21,1,2,21};
int n=sizeof(a)/sizeof(a[0]);
cout<<aajam(a,n);
    return 0;   
}