    #include <bits/stdc++.h>
    using namespace std;
    int main () {
        int n,j;
        cin>>n;
    
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        for(int i=0;i<n;i++){
            for(j=i+1;j<n;j++){
        if(arr[j]>=arr[i]){
            break;
            }

        }
        if(j==n)
            cout<<arr[i]<<" ";
    }

    return 0;
    }