/**
CodeChef | August Long Challenge | https://www.codechef.com/AUG21C/problems/OLYRANK
**/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int g1, s1, b1, g2, s2, b2;
        cin>>g1>>s1>>b1>>g2>>s2>>b2;
        
        int one=g1+s1+b1;
        int two=g2+s2+b2;
        
        if(one>two)
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
    
	// your code goes here
	return 0;
}
