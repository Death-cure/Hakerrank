#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    long long product = 1;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            product = product *x;

        }
        int lastDigi = product%10;
        if(lastDigi==2||lastDigi==3||lastDigi==6){
            cout<<"YES\n";

        }else{
            cout<<"NO\n";
        }
    }


    return 0;
}