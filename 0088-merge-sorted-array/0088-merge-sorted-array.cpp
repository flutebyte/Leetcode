class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int sum = m + n;
        vector<int> final(sum);
        int j = 0; 
        int k = 0; 
        
        for(int i = 0; i < sum; i++){
            
            if(j >= n){
                while(k < m){
                    final[i] = nums1[k];
                    k++;
                    i++;
                }
                break;
            }
            
            if(k >= m){
                while(j < n){
                    final[i] = nums2[j];
                    j++;
                    i++;
                }
                break;
            }
            
            if(nums1[k] <= nums2[j]){
                final[i] = nums1[k];
                k++;
            } else {
                final[i] = nums2[j];
                j++;
            }
        }
        
        for(int i = 0; i < sum; i++){
            nums1[i] = final[i];  
        }
    }
};