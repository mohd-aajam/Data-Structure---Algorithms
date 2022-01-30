//cin.getline() is use to take line of input from user

/* MAX_NAME_LEN 60  --> Maximum len of your name can't be more than 60
MAX_ADDRESS_LEN 120 -->  Maximum len of your address can't be more than 120
MAX_ABOUT_LEN 250 --> Maximum len of your profession can't be more than 250
  */

 #include<bits/stdc++.h>
 using namespace std;
#define MAX_aajam_LEN 60 //what should be maximum length of char name

 int main () {
  char name[MAX_aajam_LEN]; //declaring char array
  cout<<"Enter your name: "<<endl;
  cin.getline(name, MAX_aajam_LEN, '$'); //taking input from user $ will stop taking 
  //input from user we can use any symbol at place of $
  cout<<name<<endl; // printing char array
 return 0;
 }