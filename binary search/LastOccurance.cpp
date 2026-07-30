#include<bits/stdc++.h>
using namespace std;

int LastOccurance(int arr[],int n,int x){
    int low=0;
    int high=n-1;
    int ans=-1;

    for(int i=n-1;i>=0;i--){
        if(arr[i]==x){
            return i;
           
        }   
    }   
    return -1; 
}

int main(){
    int arr[]= {3, 4, 13, 13, 13, 20, 40};
    int n=7;
    int x=13;
    int result=LastOccurance(arr,n,x);
    cout<<result;


return 0;
}