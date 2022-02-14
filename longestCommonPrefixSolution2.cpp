class Solution {
public:
string combineStr(string S1,string S2)
{
    int m=min(S1.size(),S2.size());
    
    for (int i=0;i<m;i++)
    {
        if(S1[i]!=S2[i])
            return S1.substr(0,i);
    }
    return S1.substr(0,m);
}

string longCommHelper(vector<string>&strs,int l,int r)
{
    if(l==r)
    {
        return strs[l];
    }
    int m=(l+r)/2;
    string left=longCommHelper(strs,l,m);
    string right=longCommHelper(strs,m+1,r);
    return combineStr(left,right);
    
}
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
            return "";
    return longCommHelper(strs,0,strs.size()-1);
    }
};
