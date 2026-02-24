class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int size= height.size();
        int j= size-1;
        int area=0;
        int length, width;
        while(i<j){
            length = min(height[i],height[j]);
            width= j-i;
            area = max(area, length*width);
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
            
        }
        return area;
    }
};