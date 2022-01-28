class Solution {
public:
    int countSubstrings(string s) {
        vector<int>vec;
        int count=0;
  for(int i=0;i<s.size();i++)
  {
      countsubhelper(s,i,i,count);
      countsubhelper(s,i,i+1,count);
  }
        return count;
}
    void  countsubhelper(string s,int left,int right,int &count)
    {
    int  L=left,R=right;
        while(L>=0 && R<s.size() && s[R]==s[L])
        {
            count++;
            L--;
            R++;
        }
    }
};
