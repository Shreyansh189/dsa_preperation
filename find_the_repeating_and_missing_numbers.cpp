/*Find the repeating and missing numbers

Problem Statement: Given an integer array nums of size n containing values from [1, n] and each value appears exactly once in the array, except for A, which appears twice and B which is missing.
Return the values A and B, as an array of size 2, where A appears in the 0-th index and B in the 1st index.*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> findmissingRepeatingNumbers(vector<int>nums){
   int n=nums.size();
   vector<int> freq(n + 1, 0);
   for (int x : nums) {
    freq[x]++;
}
int repeating = -1;
int missing = -1;

for (int i = 1; i <= n; i++) {
    if (freq[i] == 2)
        repeating = i;
    else if (freq[i] == 0)
        missing = i;
}
return {repeating, missing};
    }

};

int main() {

    Solution obj;

    vector<int> nums = {3, 1, 2, 5, 3};

    vector<int> ans = obj.findmissingRepeatingNumbers(nums);

    cout << ans[0] << " " << ans[1];

    return 0;
}