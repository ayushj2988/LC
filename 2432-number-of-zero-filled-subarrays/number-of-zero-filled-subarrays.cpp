class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0;
        int curr=0;
        for(int i:nums){
            if(i==0){
                curr++;
                ans+=curr;
            }
            if(i!=0){
                curr=0;

            }
        }
        return ans;
    }
};