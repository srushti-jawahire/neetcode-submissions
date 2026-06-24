class Solution {
public:
    int maxArea(vector<int>& heights) {
         int l=0;
        int r=heights.size()-1;
        int maxArea=0;
        while(l<r){
            int h=min(heights[l],heights[r]);
            int w=r-l;
            int area=h*w;
            maxArea=max(maxArea,area);
            if(heights[l]<=heights[r]) l++;
            else r--;
        }
        return maxArea;
    }
};
