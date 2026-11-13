class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        
        int j=0;
        int ans=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                j=i;
            }else if(nums[i-1]==nums[i]){
                j=i;
            }else{
                ans=max(ans,i-j+1);
            }
        }
        j=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                j=i;
            }else if(nums[i-1]==nums[i]){
                j=i;
            }else{
                ans=max(ans,i-j+1);
            }
        }

        return ans;
    }
};