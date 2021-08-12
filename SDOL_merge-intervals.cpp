/*
Problem Link: https://leetcode.com/problems/merge-intervals/

Getting a TLE Error :(
*/


#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;

class Solution {
public:
    static bool sortcol(vector<int>& v1,
                vector<int>& v2 ) {
    return v1[1] < v2[1];
    }
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        int size = intervals.size();
        sort(intervals.begin(), intervals.end(), sortcol);
        
        for(int i=0; i<size; i++)
            cout<<intervals[i][0]<<" "<<intervals[i][1]<<endl;
        
        if(size==1){
            return intervals;
        }
        
        for(int i=0,k=0; i<size-1;){
            if( (intervals[i][1] <= intervals[i+1][1]) &&
                (intervals[i][1] >= intervals[i+1][0]) ){
                
                if(intervals[i][0]<intervals[i+1][0])
                    intervals[i+1][0]=intervals[i][0];
                
                intervals.erase(intervals.begin() + i);
                size--;
                i=0;
            }else{
                i++;
            }
            
            cout<<"i= "<<i<<" "<<intervals[i][0]<<" "<<intervals[i][1]<<endl;
        }
        
        return intervals;
    }
};


//interval[i].end=intervals[i+1].end;
//interval[i].start=intervals[i].start;
/*vector<vector<int>> v;
v.push_back(intervals[i][0]);
v.push_back(intervals[i][1]);
interval.push_back(v);*/

//cout<<(intervals[i][1] < intervals[i+1][1])<<endl<<(intervals[i][1] > intervals[i+1][0])<<endl;
/*


NULL pointer binding error with interval vector

if( (intervals[i][1] < intervals[i+1][1]) && (intervals[i][1] >= intervals[i+1][0]) ){
                
interval[k][0]=intervals[i][0];
interval[k][1]=intervals[i+1][1];
//cout<<interval[k][0]<<endl<<interval[k][1]<<endl;
k++;size--;*/
