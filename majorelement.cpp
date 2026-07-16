/*majority element with freq >n/3*/

#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[]={1,2,1,1,3,2,2};
int n=sizeof(arr)/sizeof(arr[0]);


unordered_map<int,int>map;
for(int i=0;i<n;i++){
map[arr[i]]++;
}
/*for (auto it : map) {
    cout << it.first << " -> " << it.second << endl;
}
*/
vector<int>ans;
for(auto it : map){
    if(it.second>n/3){

        //cout<<it.first;
        ans.push_back(it.first);
    }
}
for (int num : ans) {
    cout << num << " ";
}
return 0;
};