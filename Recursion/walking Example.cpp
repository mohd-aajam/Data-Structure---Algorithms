#include<iostream>
using namespace std;
 
int reachHome(int src, int dest){

    cout<<"Src "<<src<<" Dest "<<dest<<endl;
    if(src==dest){
        cout<<"Reached home "<<endl;
        return 0;
    }

    src++;
    reachHome(src, dest);
}

int main () {
 
 int src=1;
 int dest=10;

 reachHome(src, dest);

return 0;
}