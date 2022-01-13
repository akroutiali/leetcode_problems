/*
Algorithmes
to decrease the time complexity form O(n^2) to O(n) we can use map to store the value of vector nums and the index and to check for evry iterations if target-nums[i] exist in the map
,if yes return the index of current elment in vectors and the index of the elment in the map else continue until the end of the vector.

time complexity of this solutions: O(n)
space complexity :O(n);


*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int>m;
        vector<int>out;
        for(int i =0;i<nums.size();i++)
        {
            auto it =m.find(target-nums[i]);
            if (it !=m.end())
            {
                out.push_back(it->second);
                out.push_back(i);
                break;
            }
            m.insert({nums[i],i});
        }
        return out;
    }
};
