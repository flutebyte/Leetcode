class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        //brute force
        vector<int> ans;
        for(int i = 0; i < nums1.size(); i++){
            int j = 0;
            while(j < nums2.size()){
                if(nums1[i] == nums2[j]){
                    int nextGreater = -1;
                    for(int k = j + 1; k < nums2.size(); k++){
                        if(nums2[k] > nums1[i]){
                            nextGreater = nums2[k];
                            break;
                        }
                    }
                    ans.push_back(nextGreater);
                    break;
                }
                j++;
            }
        }
        return ans;
        //monotonic stack
        // stack<int> st;
        // vector<int> ans;

    }
};