

/* Selection sort
when we use selection sort --> When size of given array is sort then we use selection sort
The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from
unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.
1) The subarray which is already sorted. 
2) Remaining subarray which is unsorted.
In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray
 is picked and moved to the sorted subarray.  */

// Example Logic below
 /*       for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){          
                if(arr[j]<arr[i])
                    swap(arr[j], arr[i]);
            }         
        }  
  
  */