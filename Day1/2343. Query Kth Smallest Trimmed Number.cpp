/*
2343. Query Kth Smallest Trimmed Number
Solved
Medium
Topics
Companies
Hint
You are given a 0-indexed array of strings nums, where each string is of equal length and consists of only digits.

You are also given a 0-indexed 2D integer array queries where queries[i] = [ki, trimi]. For each queries[i], you need to:

Trim each number in nums to its rightmost trimi digits.
Determine the index of the kith smallest trimmed number in nums. If two trimmed numbers are equal, the number with the lower index is considered to be smaller.
Reset each number in nums to its original length.
Return an array answer of the same length as queries, where answer[i] is the answer to the ith query.

Note:

To trim to the rightmost x digits means to keep removing the leftmost digit, until only x digits remain.
Strings in nums may contain leading zeros.

*/

class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            int d=queries[i][1];
            int k=queries[i][0];
            vector<pair<string,int>>v;
            int n=nums[0].size();
            for(int j=0;j<nums.size();j++){
                v.push_back({nums[j].substr(n-d,d),j});
            }
            sort(v.begin(),v.end());
            ans.push_back(v[k-1].second);
        }
        return ans;
    }
};
