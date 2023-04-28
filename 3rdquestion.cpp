#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int sum=0;
        int index= s.size()-1;
        int j=0;
        for(int i=0;i<s.size();i++){
            int digit = s[index]-'0';
            int sum1 = digit * pow(2,j) ;
            sum = sum+ sum1;
            index--;
            j++;

        }
        cout<<sum<< endl;
    }
}