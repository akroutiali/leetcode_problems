class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>result;
        
        for(int num:nums)
        {
            int index=abs(num)-1;
            int var=nums[index];
            if(var>0)
                nums[index]=var*-1;
            else
                result.push_back(abs(var));
            
        }
        return result;
    }
    /*
   the efficient solution is:
       -iterate throw the elemnt of array
       -change the value of the index to negative
       -if the value is already negative add to the array 
       
       
       time Complexity :O(n)
       space complexity :O(1)
    
    
    */
};
