class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i=0, j=colors.size()-1;
        int max1=0,max2=0;
        for(int m=j; m>i; m--){
            if(colors[i]!=colors[m]){
                max1=max(abs(i-m), max1);
            }
        }
        for(int m=0; m<j; m++){
            if(colors[j]!=colors[m]){
                max2=max(abs(j-m), max2);
            }
        }
        int ans= max(max1,max2);
        return ans;
    }
};