class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans=INT_MAX;
        
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                int sum=accumulate(nums.begin()+i,nums.begin()+j+1,0);
                if(sum>0 && j-i+1>=l && j-i+1<=r){
                    ans=min(ans,sum);
                }
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};