//in this proble we hav to find the length of longest subarray with sum zero 
/*Input:
 N = 6, array[] = {9, -3, 3, -1, 6, -5}  
Result:
 5  
Explanation:
 The following subarrays sum to zero:
- {-3, 3}
- {-1, 6, -5}
- {-3, 3, -1, 6, -5}
The length of the longest subarray with sum zero is 5.
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {9, -3, 3, -1, 6, -5};
    unordered_map<int,int>sumIndexmap;
    int sum=0;
     int maxLen = 0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
 sum+=arr[i];
 if(sum==0){
    maxLen=i+1;

 }
 else if(sumIndexmap.find(sum)!= sumIndexmap.end()){
    maxLen=max(maxLen,i-sumIndexmap[sum]);

 }
 else{
    sumIndexmap[sum]=i;
 }
    }
    cout<<maxLen;
}