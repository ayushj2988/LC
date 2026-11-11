class Solution {
public:
    long long minimumCost(long long cost1, long long cost2,long long costBoth, long long need1, long long need2) {
        if(need1==0 && need2==0) return 0;
        long long tcost=0;
        tcost+=min(costBoth,cost1+cost2)*min(need1,need2);
        long long common=min(need1,need2);
        need1-=common;
        need2-=common;

        if(need1>0) tcost+=min(costBoth,cost1)*need1;
        if(need2>0) tcost+=min(costBoth,cost2)*need2;

        return tcost;

    }
};