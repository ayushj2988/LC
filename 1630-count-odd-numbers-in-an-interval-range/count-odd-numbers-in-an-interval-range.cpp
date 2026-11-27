class Solution {
public:
    int countOdds(int low, int high) {
        //10-8+1 = 3
        //3 4 5 6 7
        //4 5 6 7 8
        if((high-low+1)%2==0) return (high-low+1)/2;
        else if(low%2!=0) return ((high-low+1)/2)+1; 
        return (high-low+1)/2;
        
    }
};