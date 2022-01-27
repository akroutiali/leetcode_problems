class Solution {
public:
    int longestPalindromeSubseq(string s) {
    int n=s.size();
    vector<vector<int>> dp(n,vector<int>(n));
    for(int i=0;i<n;i++)
        dp[i][i]=1;
    for(int curr_len=2;curr_len<=n;curr_len++)
    {
        for(int i=0;i<n-curr_len+1;i++)
        {
            int j=i+curr_len-1;
            if(s[i]==s[j])
            {
                dp[i][j]=2+dp[i+1][j-1];
            }
            else
            {
                dp[i][j]=max(dp[i][j-1],dp[i+1][j]);
            }
        }
    }
    return dp[0][n-1];
    }
};
