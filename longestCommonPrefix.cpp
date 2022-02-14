class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        //base case 
        if(strs.size()==0)
            return "";
        int len=strs[0].size();
        for (int i=0;i<len;i++)
        {
             char c =strs[0][i];
            for(int j=1;j<strs.size();j++)
            {
                  if(c!=strs[j][i])
                      return strs[0].substr(0,i);
            }
            
        }
        return strs[0];

    }
};
