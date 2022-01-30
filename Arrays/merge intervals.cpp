#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) { 
        sort(intervals.begin(), intervals.end());
     vector<vector<int>>result;
     int start = intervals[0][0], end=intervals[0][1];
    for(auto& i: intervals){
        if(i[0]>end){
          result.push_back({start, end});
          start=i[0];
          end=i[1];            
        }
        else end=max(end, i[1]);
    }
    result.push_back({start, end});
        return result;
    }
};
int main () {

// Check out this question on given link 
// https://leetcode.com/problems/merge-intervals/submissions/


return 0;
}

#include<iostream>
using namespace std;
 
 
int main () {
int n;cin>>n; 
 int arr[n];
for(int i = 0; i < n; i++) cin>>arr[i];
 
return 0;
}