#include<iostream>
using namespace std;
void printsub(string str,string cur="",int index=0)//take arguments
{
    if (index==str.length())//end statement
    {
        cout<<cur<<" ";
        return;
    }
    printsub(str,cur,index+1);    
    printsub(str,cur+str[index],index+1); 
}

int main()
{
    string str("abc");//create string
printsub(str);//give argument

  return 0;
}

