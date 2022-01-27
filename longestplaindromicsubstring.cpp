class Solution {
public:
    string longestPalindrome(string s) {
    if( s.size()<1)
        return "";
    int start=0,end=0,maxl=0;
    for(int i=0;i<s.size();i++)
    {
        int len1=longestintervall(s,i,i);
        int len2=longestintervall(s,i,i+1);
        int len=max(len1,len2);
        if(maxl<len)
        {
            maxl=len;
            start=i-(len-1)/2;
            end=i+len/2;
        }
    }
        return s.substr(start,end-start+1);
    }
int longestintervall(string s,int right,int left)
{
    int L=left,R=right;
    while(L>=0 && R<s.size() && s[L]==s[R])
    {
        L--;
        R++;
    }
    return R-L-1;
}
};
