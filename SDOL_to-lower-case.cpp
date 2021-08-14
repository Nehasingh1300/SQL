/*
Problem Link: https://leetcode.com/problems/to-lower-case/
*/

class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i<s.length(); i++){
            //int ascii=int(s[i]);
            if(int(s[i]) < 91 && int(s[i]) > 64){
                s[i]=char( int(s[i]) + 32 );
            }
        }
        return s;
    }
};
