class Solution {
public:
    long long countValidSubstrings(string s) {
        long long ttsubstr=s.size()*(s.size()+1)/2;
        long long abcstr=0;
        
        int p=-1;
        for(int i=2;i<s.size();i++){
            if(s[i-2]=='a' && s[i-1]=='b' && s[i]=='c'){
                p=i-2;
            }

            if(p!=-1){
                abcstr+=(p+1);
            }
        }
    return ttsubstr-abcstr;

    }
};