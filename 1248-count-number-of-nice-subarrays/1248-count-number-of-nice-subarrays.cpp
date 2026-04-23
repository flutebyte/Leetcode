class Solution {
public:
    int atMost(vector<int>& nums, int k) {
        int l = 0, count = 0, ans = 0;

        for (int r = 0; r < nums.size(); r++) {
            if (nums[r] % 2 != 0) count++;

            while (count > k) {
                if (nums[l] % 2 != 0) count--;
                l++;
            }

            ans += (r - l + 1);
        }

        return ans;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};