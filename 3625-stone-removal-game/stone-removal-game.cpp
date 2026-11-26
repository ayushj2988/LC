class Solution {
public:
    bool canAliceWin(int n) {
        //50-10 40 cnt = 1
        //40-9  cnt 2
        //31 - 8    cnt 3
        // 23 - 7   cnt 4
        // 16 - 6   cnt 5
        // 10 - 5   cnt 6
        // 5 - 4    cnt 7
        // 1 -3     cnt 8
        int cnt=1;
        int num=10;
        while(n>0){
            if(n>=num){
                n-=num;
                cnt++;
                num-=1;
            }else if(n<num){
                if(cnt%2==0) return true;
                else return false;
            }
        }
        if(cnt%2==0) return true;
        else return false;
    }
};