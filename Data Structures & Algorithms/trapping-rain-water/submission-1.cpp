class Solution {
   public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int sum = 0;
        while (l < n && height[l] == 0) ++l;
        while (l < n - 1) {
            int r = l + 1;
            int maxEl = height[r];
            int maxIn = r;
            while (height[r] < height[l]) {
                if (r == n - 1) {
                    r = n;
                    break;
                }
                ++r;
                if (height[r] > maxEl) {
                    maxEl = height[r];
                    maxIn = r;
                }
            }
            if(r == n) {
                int wall = maxIn;
                for (int i = l + 1; i < wall; ++i) sum += maxEl - height[i];
                l = wall;
            }
            else {
                for (int i = l + 1; i < r; ++i) sum += height[l] - height[i];
                l = r;
            }
        }
        return sum;
    }
};
