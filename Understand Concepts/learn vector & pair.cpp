#include <bits/stdc++.h>
using namespace std;

//  Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or
//   deleted, with their storage being handled automatically by the container.

int main () {
int k=100,arr[10],i;
 vector<int>aajam; //vector created
 aajam.push_back(k);  //inserting elements in vector.
 aajam.push_back(200);
 aajam.push_back(300);

//  There are three ways to access the vector elements 
 
// first method
    for (int i = 0; i <aajam.size();i++) {
        cout<<aajam[i];
    } //100 200 3000

// second method
    vector<int>::iterator itr;
    for(itr=aajam.begin();itr != aajam.end();itr++){
        cout<<*itr;
    }//100 200 300

// third method
    for(auto elements :aajam){
        cout<<elements;
    }//100 200 300

    vector<int>aajam2 (3,50); //3 is size and 50 is repeted
    //50 50 50

    swap(aajam,aajam2);
    //for swap elements of aajam and aajam2

    sort(aajam.begin(),aajam.end());
    //it will sort from start to end

    vector<pair<int,int> >aaj;
    //make vector of pairs

    aaj.push_back(make_pair(arr[i],i));
    //for inserting pairs into the vector

return 0;
}