/*

*/

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int mid=n&1==0?n+1/2:n/2;
        int eq=nums[mid];
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=abs(eq-nums[i]);
        }   
        return ans;
    }
};
