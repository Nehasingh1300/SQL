/*

Problem Link: https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/

*/

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        
        int final[n+1]={0};
        for(int i=0; i<n; i++){
            //cout<<final[arr[i]]<<" ";
            final[arr[i]]+=1;
            //cout<<final[arr[i]]<<endl;
        }
        
        int repeat,missing;
        int i1;
        for(i1=1; i1<n+1; i1++){
            int count=0;
            if(final[i1]==0 && count ==0){
                missing = i1;
                count++;
          //      cout<<i1<<" "<<missing<<endl;
            }
        }
        
        /*cout<<"final"<<endl;
        for(int i=0; i<n+1; i++)
        cout<<final[i]<<" ";
        cout<<endl;
        */
        //cout<<"repeat"<<endl;
        int i2;
        for(i2=1; i2<n+1; i2++){
          //  cout<<i2<<endl;
            if(final[i2]>1){
                repeat = i2;
            }
        }
        /*cout<<repeat<<" "<<missing<<endl;
        cout<<"return"<<endl;
        */
        int *res = new int(2);
        for(int i=0; i<2; i++){
            if(i==0)
                res[i]=repeat;
            else
                res[i]=missing;
        }
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
