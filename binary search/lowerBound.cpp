#include<bits/stdc++.h>
using namespace std;

class LowerBoundFinder{
    public:
    int LowerBound(vector<int>arr,int n,int x){
        for(int i=0;i<n;i++){
            if(arr[i]>=x){
                return i;

            }
        }
        return n;
    }
};

int main(){
    vector<int>arr={3,5,8,15,19};
    int n=arr.size();
    int x=9;
    LowerBoundFinder finder;
    int ind=finder.LowerBound(arr,n,x);
    cout<<"The lowe bound is the index:"<<ind<<"\n";
    return 0;
}