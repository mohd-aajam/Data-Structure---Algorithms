// When you find a particular solution and can neglect a particular part this means you have to use binary search...
// for Eg [1,2,3,4,5,6] my answer is greater then 4 then i can ignor left part of the array
//Eg goto here https://www.codingninjas.com/codestudio/problems/aggressive-cows_1082559 


/* Binary Search: Search a sorted array by repeatedly dividing the search interval in half. Begin with an interval covering the whole array.
 If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. Otherwise, 
 narrow it to the upper half. Repeatedly check until the value is found or the interval is empty. */
