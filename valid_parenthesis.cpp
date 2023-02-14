#include <bits/stdc++.h>
using namespace std;

/*
Abhishek kumar
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        int c1=0;
        int c2=0;
        int c3=0;
        int c4=0;
        int c5=0;
        int c6=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                c1++;
            }
            else if(s[i]==')')
            {
                c2++;
            }
            else if(s[i]=='{')
            {
                c3++;
            }
            else if(s[i]=='}')
            {
                c4++;
            }
            else if(s[i]=='[')
            {
                c5++;
            }
            else if(s[i]==']')
            {
                c6++;
            }
        }
        if((c1%2==1 && c2%2==1) && (c3%2==1 && c4%2 ==1) && (c5%2==1&& c6%2==1))
        {
            cout<<"true\n";
        }
        else
        {
            cout<<"false";
        }
    }
}