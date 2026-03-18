class Solution {
public:
    int loadd(vector<int>& weights, int cap){
        int days = 1;
        int currentLoad = 0;

        for(int i = 0; i < weights.size(); i++){
            if(currentLoad + weights[i] > cap){
                days++;
                currentLoad = weights[i];
            } else {
                currentLoad += weights[i];
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int min = *max_element(weights.begin(), weights.end());
        int max = accumulate(weights.begin(), weights.end(), 0);

        while(min < max){
            int mid = min + (max - min) / 2;
            int ans = loadd(weights, mid);

            if(ans <= days){
                max = mid;
            } else {
                min = mid + 1;
            }
        }
        return min;
    }
};