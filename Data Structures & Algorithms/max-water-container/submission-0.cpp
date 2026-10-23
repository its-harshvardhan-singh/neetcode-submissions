class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int l=0;
        int r=n-1;
        int maxArea=0;
        while(l<r){
            int len=r-l;
            int wid=min(heights[l],heights[r]);
            maxArea=max(maxArea,len*wid);
            int temp;
            if(heights[l]<heights[r]){
                temp=l++;
                while(heights[l]<heights[temp]) ++l;
            }
            else{
                temp=r--;
                while(heights[r]<heights[temp]) --r;
            }
        }
        return maxArea;
    }
};
