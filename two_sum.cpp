#include <bits/stdc++.h>
using namespace std;



/*
Abhishek kumar 
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
 */
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int target;
        cin>>target;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((arr[i]+arr[j])==target)
                {
                    cout<<i<<","<<j<<endl;
                }
            }
        }

        /*optmise teh above code into o(n) time complexity by using mapping
         int tar;
        cin>>tar;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(arr[i]-target)==0)
            {
                mp[arr[i]]=i;
            }
            else
            {
                cout<<{mp[tar-arr[i]],i}<<endl;
            }
        }


        */

       



        
    }
    return 0;
}