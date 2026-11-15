class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        if(num%3!=0) return {};
        long long data=num/3;
        return {data-1,data,data+1};
    }
};