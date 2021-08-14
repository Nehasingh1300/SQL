/*
Problem Link: https://leetcode.com/problems/is-subsequence/
*/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i,j;
        int si=s.length();
        for(i=0, j=0; i<s.length() && j<t.length();){
            if(s[i]==t[j]){
                i++; j++;
                //cout<<i<<" "<<j<<endl;
            }else{
                j++;//cout<<j<<endl;
            }
        }if(i==si){
            return true;
        }else{
            return false;
        }
    }
};
