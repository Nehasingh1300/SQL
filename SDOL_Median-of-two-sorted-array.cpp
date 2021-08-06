// LeetCode Problem: https://leetcode.com/problems/median-of-two-sorted-arrays/submissions/


class Solution {
public:
    
    double median(vector<int>& nums, int size){
        double ans=0;
        if(size%2==0){
            ans=( nums[size/2] + (nums[(size/2)-1]) )/2.0;
            //cout<<ans<<endl;
        }else{
            ans=nums[size/2];
            //cout<<ans<<endl;
        }
        return ans;
    }    
    
    double merge(int a1[], int s1, int a2[], int s2){
        int i=0,j=0, k=0;
        int temp[s1+s2];
        int size=s1+s2;
        
        if(size==1){
            if(s2==1)
                return a2[0];
            else
                return a1[0];
        }
        
        while(i<s1 && j<s2){
            if(a1[i]<a2[j]){
                temp[k++]=a1[i++];
            }else{
                temp[k++]=a2[j++];
            }
        }
        while(i<s1)
            temp[k++]=a1[i++];
        while(j<s2)
            temp[k++]=a2[j++];
        
        double ans=0;
        if(size%2==0){
            ans=( temp[size/2] + (temp[(size/2)-1]) )/2.0;
            //cout<<ans<<endl;
        }else{
            ans=temp[size/2];
            //cout<<ans<<endl;
        }
        return ans;
    }
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int s1=nums1.size(), s2=nums2.size();
        //cout<<"s1: "<<s1<<endl<<"s2: "<<s2<<endl;
        int size=s1+s2;
        
        if(s1==0){
            return median(nums2,s2);
        }else if(s2==0){
            return median(nums1,s1);
        }
        
        
        int arr1[s1],arr2[s2];
        for(int i=0; i<s1; i++)
            arr1[i]=nums1[i];
        
        for(int i=0; i<s2; i++)
            arr2[i]=nums2[i];
        
        double ans = merge(arr1,s1,arr2,s2);
        return ans;        
        
    }
};
