class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]=='1')
                {
                    dp[i][j]=1;
                }
            }
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(dp[i][j] && dp[i-1][j])
                {dp[i][j]+=dp[i-1][j];}
            }
        }
        int ans=0;
        for(int k=0;k<n;k++)
        {
            for(int i=0;i<m;i++)
            {
                int j=i;
                int ct=0;
                int val=INT_MAX;
                while(j>=0)   
                {
                    val=min(val,dp[k][j]);
                    ct++;
                    ans=max(ans,ct*val);
                    j--;
                }
            }
        }
        return ans;
        
    }
};