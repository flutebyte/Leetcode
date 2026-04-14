class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1) return x;
        int ans=1;
        for(int i=1; i<= x/i; i++){
            ans= i;
        }
        return ans;
    }
};