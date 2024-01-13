class Solution {
public:
    void generate(int k,int n,int index,int arr[],vector<vector<int>>&ans,vector<int>& temp){
        if(k==0 && n==0){
            ans.push_back(temp);
            return;
        }
        if(k==0 && n!=0){
            return;
        }
        if(n<0){
            return;
        }
        for(int i=index;i<9;i++){
            temp.push_back(arr[i]);
            generate(k-1,n-arr[i],i+1,arr,ans,temp);
            temp.pop_back();
        }


    }
    vector<vector<int>> combinationSum3(int k, int n) {
        int arr[]={1,2,3,4,5,6,7,8,9};
        vector<vector<int>>ans;
        vector<int>temp;
        int index=0;
        generate(k,n,index,arr,ans,temp);
        return ans;
    }
};
