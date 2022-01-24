class Solution {
public:
    int lengthOfLongestSubstring(string s) {

    int len=0;
    for(int i=0;i<s.size();i++)
    {
        //declare bool vector by default all elemnt are false
        vector<bool> visited(256);
         for(int j=i;j<s.size();j++)
         {
             if(visited[s[j]]==true)
                 break;
             else
             {
                 len=max(len,j-i+1);
                 visited[s[j]]=true;
             }
         }
    }
    return len;
    }
};
