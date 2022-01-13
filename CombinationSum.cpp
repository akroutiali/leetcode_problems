class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>out;
        vector<int>set;
            combinationSumhelper(candidates,out,set,0,target);
        return out;
    }
    void combinationSumhelper(vector<int>&candidates,vector<vector<int>>&out,vector<int>&set,int index,int target)
{
        if(index==candidates.size())
        {
            
            if(target==0)
            out.push_back(set);
        return ;
        }
        
    if(candidates[index]<=target)
    {
        set.push_back(candidates[index]);
        combinationSumhelper(candidates,out,set,index,target-candidates[index]);
        set.pop_back();
    }
    combinationSumhelper(candidates,out,set,index+1,target);
    
}
};
