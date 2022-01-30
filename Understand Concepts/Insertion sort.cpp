/* INSERTION SORT

Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. 
The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and 
placed at the correct position in the sorted part.

 for(int i=1;i<n;i++){
       int temp=arr[i];
       for(j=i-1;j>=0;j--){
           if(arr[j]>temp)               
               arr[j+1]=arr[j]; //shift
           
           else  //ruk jao
           break;
       }
          arr[j+1]=temp;       
   } */