class Solution {
public:
    int maxArea(vector<int>& height) {
        int max=INT_MIN;
        int i=0;
        int j=height.size()-1;
        while(i<j)
        {
            int ans=(j-i)*min(height[i],height[j]);
            if(ans>max)
                max=ans;
            height[i]>height[j]?j--:i++;
        }
        return max;
        
    }
};
//time complexity O(n)
//space complexity O(1)
