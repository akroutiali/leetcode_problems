/*Algorithmes:

as base case : to check if index equal to size of the input vector we have to check if target equal to 0 to add the add the subsetor not

                   7
                 
                 2       
             5            5
              2         3    
          3                  2
           2               3
       1   
        2
              
 -check if target <candidates[i] keep doing this operation :target=target-candidates[i]
 -call  recursive function with the same index 
 redo step1+step2 until base case is verified 
 -call the recursive function with index=index+1
*/

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
