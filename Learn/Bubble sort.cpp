/*  
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.

Example given below
time complexity
best case(if already sorted) --> o(n);
worst case --> o(n^2)

  for(int i=1;i<n;i++){
        bool swaped=false;
        for(int j=0;j<n-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j+1], arr[j]);
                swaped=true;
            }             
        } if(swaped==false)
                 break;          
    } */