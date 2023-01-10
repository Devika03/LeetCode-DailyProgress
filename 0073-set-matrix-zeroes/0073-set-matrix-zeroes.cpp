class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int r=0;
        int c=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                { 
                    if(i==0)
                        c=1;
                    if(j==0)
                        r=1;
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                cout<<matrix[i][j]<<" ";
            cout<<"\n";
        }
        cout<<r<<c;
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j]=0;
            }
        }
        if(r)
        {
            for(int i=0;i<m;i++)
                matrix[i][0]=0;
        }
        if(c)
        {
            for(int i=0;i<n;i++)
                matrix[0][i]=0;
        }
    }
};