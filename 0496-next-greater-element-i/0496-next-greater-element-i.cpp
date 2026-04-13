class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // //brute force
        // vector<int> ans;
        // for(int i = 0; i < nums1.size(); i++){
        //     int j = 0;
        //     while(j < nums2.size()){
        //         if(nums1[i] == nums2[j]){
        //             int nextGreater = -1;
        //             for(int k = j + 1; k < nums2.size(); k++){
        //                 if(nums2[k] > nums1[i]){
        //                     nextGreater = nums2[k];
        //                     break;
        //                 }
        //             }
        //             ans.push_back(nextGreater);
        //             break;
        //         }
        //         j++;
        //     }
        // }
        // return ans;
        //monotonic stack
        // stack<int> st;
        // vector<int> ans;
        int size = nums2.size();
        vector<int> nge(size);
        stack<int> st;

        // Step 1: build NGE for nums2
        for(int i = size - 1; i >= 0; i--){
            while(!st.empty() && st.top() <= nums2[i]){
                st.pop();
            }

            if(st.empty()) nge[i] = -1;
            else nge[i] = st.top();

            st.push(nums2[i]);
        }

        // Step 2: map
        unordered_map<int, int> mp;
        for(int i = 0; i < size; i++){
            mp[nums2[i]] = nge[i];
        }

        // Step 3: answer for nums1
        vector<int> ans;
        for(int x : nums1){
            ans.push_back(mp[x]);
        }

        return ans;
    }
};