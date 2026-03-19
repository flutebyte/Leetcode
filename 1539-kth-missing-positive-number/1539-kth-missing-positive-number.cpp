class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        //brute force
        int maxx = *max_element(arr.begin(),arr.end());
        int missingCount = 0;

        for(int i = 1; i <= maxx + k; i++){
            if(find(arr.begin(), arr.end(), i) == arr.end()){
                missingCount++;
                if(missingCount == k) return i;
            }
        }
        return missingCount;
    }
};