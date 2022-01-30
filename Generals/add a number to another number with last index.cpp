#include<iostream>
using namespace std;
int majak(){
  int countDigit=0;
int first; cin>>first; //insert first number
int sec=first;
int second;cin>>second;  //insert second number
while(first>0){     //count digit eg 12345 is 5
first=first/10;
countDigit++;
}
int arr[countDigit],i=0;  
while(sec>0 || i<countDigit){  //insert all element into array
    int print=sec%10;
    sec=sec/10;
arr[i]=print;
    i++;
}
for(int i=countDigit-1;i>=0;i--){
    int fi,cnt=0;
    arr[i]=arr[i]+second;
    fi=arr[i];
    while(fi>0){     //count digit eg 12345 is 5
        fi=fi/10;
        cnt++;}
    if(cnt>1)
        arr[i]=arr[i]%10;    
    else continue;
}

int low=0 ,high=countDigit-1;
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }

int kk=arr[0];
for(int j=0;j<countDigit-1;j++) //print array
{kk=arr[j+1]+(kk*10);}

return kk;
}

int main(){

cout<<majak();  
    return 0;
}
