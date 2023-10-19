#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    int key;
    vector<vector<int>>ans; 
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;i++)
        {
            cin>>ans[i][j];
        }
    }
    int target;
    cin>>target;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(target==ans[i][j])
            {
                cout<<"(" <<i<<","<<j<<")";
            }
        }
    }
    return 0;

}