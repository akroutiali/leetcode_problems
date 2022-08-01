class Solution {
public:
    //check if the triblet equal to 0 
    vector<vector<int>> threeSum(vector<int>& nums) {
        //straightforward solution is to use brute force 
        // solution made by ali akrouti 
        //time complexity O(n^3)
        //space Complexity O(1)
        vector<vector<int>> out;
        vector<int>set;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-3;i++)
        {
            for(int j = i+1;j<nums.size()-1;j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    if(nums[i]+ nums[j]+nums[k] == 0 )
                    {
                        vector<int>set;
                        set.push_back(nums[i]);
                        set.push_back(nums[j]);
                        set.push_back(nums[k]);
                        //out.push_back(set);
                        //check if the triblet already exist 
                        bool isfound= false;
                        for(int i =0;i<out.size();i++)
                        {
                            if(isfound)
                            {
                                break;
                            }
                            for(int j = 0;j<out[i].size();j++)
                            {
                                
                                if(set[j] != out[i][j])
                                {
                                    break;
                                }
                                if(j==2)
                                {
                                    isfound = true;
                                }
                            }
                        }
                        if(!isfound)
                        {
                            out.push_back(set);
                        }
                    }
                }
            }
        }
        return out;
        
    }
};
