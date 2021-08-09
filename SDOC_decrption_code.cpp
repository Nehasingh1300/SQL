#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    
    for(int i=0; i<s.length(); i++){
        int asciiVal=s[i]-k;
        char asciiChar = asciiVal;
        s[i]=asciiChar;
    }
    cout<<"Decrypted String: "<<s;

    return 0;
}
