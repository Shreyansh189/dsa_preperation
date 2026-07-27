#include<bits/stdc++.h>
using namespace std;

class SeacrchInsertPosition{
    public:
 int SearchInsert(vector<int>&arr,int n,int x){
 int low=0,high=n-1;
 while(low<=high){
    int mid=low+(high-low)/2;

    if(arr[mid]==x)
    return mid;

    else if(arr[mid]<x)
    low=mid+1;

    else high=mid-1;

 }
 }

};

int main(){
    vector<int>arr={1,2,4,7};
    int x=10;
    SeacrchInsertPosition obj;
    cout<<obj.SearchInsert(arr,arr.size(),x);
    return 0;

}