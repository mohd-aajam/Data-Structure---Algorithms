/* C++ STL Data Structures And Algorithms
ALGORITHMS      --Line No. 15
VECTOR         --Line No. 26
DEQUE          --Line No. 39
LIST           --Line No. 49
STACK          --Line No. 55
QUEUE          --Line No. 62
PRIORITY QUEYE --Line No. 69
SET            --Line No. 81
UNORDERED SET  --Line No. 90
MAP            --Line No. 93
UNORDERED MAP  --Line No. 101


#include<algorithm>   --> Need to include its library
out vector has elements like {1, 3, 5, 6, 7, 8, 9}
cout<<binary_search(aajam.begin(), aajam.end(),6)  --> implementation of binary search in a vector,,it return 0 or 1 here 6 is element we need to find 
cout<<lower_bound(aajam.begin(), aajam.end(),6)-aajam.begin() -->if element is present then it return the index of that element else it return index of element just greater then  that element
cout<<upper_bound(aajam.begin(), aajam.end(),6)-aajam.begin() -->It return the index of just greater element of the given element(here 6).
int a =3, b=5; cout<<max(a,b)  --> Print maximum from both    and cout<<min(a, b) --> Print minimum from both
string a="abcd"; reverse(a.begin(), a.end()); cout<<a;  --> Will reverse the string and print dcba
out vector have elements -->{1, 2, 3, 4}  rotate.(aajam.begin, aajam.begin()+1, aajam.end());  --> will rotate the elements by 1 output is {2, 3, 4, 1}  
sort(aajam.begin(), aajam.end())  --> will sort out array or vector it is based on intro sort which is combination of [Quick sort, heapsort, insertion sort]


VECTOR-->A dynamic sized array (when the it get fulled and we try to insert elements then size of it will get increased)-->A vector is a single contiguous memory block
#include<vector>     --> need to include its library
vector<int>aajam;   --> here we have created a vector of int type with name aajam
vector<int>aaj(5,123);  --> vector size will be a and every index assign value of 123 like  --> {123,123,123,123,123} it assign 0 if second argument is nothing
vector<int>aaj(aajam)   -->all element of aajam will get copied into aaj
aajam.size();           --> means what are the current elements inside to it
aajam.capacity();    -->means how much memory is allocated to it  and capacity will be doubled when it is fulled
aajam.push_back(123);;  --> use to insert element inside vector aajam
aajam.front(); and ajam.back();  --> use to print first and last element of vector
aajam.pop_back();  --> use to delete last element of vector
aajam.clear();   --> use to clear elements from vector (note capacity will be same as previous)


DEQUE -->We can do deletion and insertion on both the ends -->A deque is a set of linked memory blocks, where more than one element is stored in each memory block.
#include<deque>  --> need to include its library
deque<int>aajam  -->  deque is created
aajam.push_back(1) and   aajam.push_front(2) --> will insert element in the back side (right) and insert element in the front side (left)  -->output 21
aajam.pop_front()  and   aajam.pop_back()   --> will delete element from left side and delete element from right side
cout<< aajam.front()      and  cout<< aajam.back()  --> will give first and last elements
aajam.empty()  ->check whether it is empty ir not
aajam.erase(aajam.begin(), aajam.begin()+3)   --> will erase first 3  elements 


LIST --> it is dubly linkedlist  -->  A list is a set of elements dispersed in memory, i.e.: only one element is stored per memory "block".
#include<list>  --> need to include its library
list<list>aajam;  -->list is implemented
aajam.push_back(1) and   aajam.push_front(2) --> will insert element in the back side (right) and insert element in the front side (left)  -->output 21


STACK --> It is last in first out datastructure  -->(elements inserted in the end will came out first)
#include<stack> --> 
stack<string>aajam;  --> stack is implemented of type string
aajam.push("mohd");  aajam.push("aajam");  aajam.push("tagala");
cout<< aajam.top()  --> print tagala (tagala is inserted in the last)


Queue --> first in first out (line eg)  -->Elements are inserted at the back(end) and are deleted from the front of the queue. 
#include<queye>  -->  Need to include its library
queue<string>aajam;  --> queue is implemented of type string
aajam.push("mohd");  aajam.push("aajam");  aajam.push("tagala");
cout<< aajam.front()  --> print aajam (aajam is inserted first)


PRIORITY QUEUE -->   first element of the queue is the greatest of all elements in the queue and elements are in nonincreasing order (hence we can see that each element of the queue has a priority {fixed order}).
#include<queye>  -->  Need to include its library
priority_queue<int>maxi;  --> implementation of --> max heap element we retrive will always greatest from all the elements
priority_queue<int, vector<int>, greater<int>> mini;  --> min heap element we retrive will always smallest from all the elements
maxi.push(1); maxi.push(5); maxi.push(3); maxi.push(2);  --> insert element inside maxi 
mini.push(1); mini.push(5); mini.push(3); mini.push(2);  --> insert element inside mini
int n=maxi.size();  --> because we need to run loop 4 times
for(int i=0;i<n;i++){
cout<<maxi.top();
maxi.pop();}       --> will print 1 2 3 5  and mini will print 5 3 2 1


SET -->Each element has to be unique -->can't modify the element adter insertion we only can insert and delete. -->Retrive in sorted order -->it is implemented using BST
#include<set>   -->  Need to include its library
set<int>aajam;  --> set is implemented of type int
aajam.insert(1); aajam.insert(5);aajam.insert(5); aajam.insert(3); aajam.insert(3); aajam.insert(2);  --> insert element inside aajam
aajam.erase(5)  --> use to delete that element (5 is element  not index)
aajam.count(5)  --> Use to check whether element 5 is present or not
for(auto i:aajam)   cout<<i   -->  will print in sorted order like 1 2 3 5  (repated elements will not print)


UNORDERED SET --> faster then set --> same as SET but not sorted


MAP -->In this our data is stored in the form of key:value form,,all our key is unique,,one key is point to one value,,Retrive value in sorted form
#include<map>  --> Need to include its library
map<int, string>aajam; --> map is implimented to key type int and value of type string
aajam[1]="aajam"; aajam[11]="mohd"; aajam[2]="tagala"; --> Insert value like this or like this --> aajam.insert({10,"Hii"});
aajam.count(5)  --> Use to check whether element 5 is present or not
aajam.erase(5)  --> use to delete that element (5 is element  not index)


UNORDERED MAP --> Same as MAP but not in sorted form


 */