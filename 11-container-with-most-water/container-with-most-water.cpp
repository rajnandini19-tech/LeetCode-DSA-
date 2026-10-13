class Solution {
public:
    int maxArea(vector<int>& height) {
        int MaxWater = 0;
        int lp = 0, rp = height.size() - 1;

        while(lp < rp){
            int width = rp - lp ;
            int hgt = min(height[lp], height[rp]);
            int currentWater = width * hgt;
            MaxWater = max(MaxWater, currentWater);

            height[lp] < height[rp] ? lp++ : rp--;
        }
        return MaxWater;
    }
};