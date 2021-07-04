#include<bits/stdc++.h>
using namespace std;
class tripal{
 public:
       void funda(){
       int n;
       cin>>n;
       int ar[n];
       int sum=1;
       for(int b=0;b<n;b++){

       cin>>ar[b];

       };
       sort(ar,ar+n);



        for(int b=n-2;b>=0;b--){

        if (ar[n-1]==ar[b]){
        sum=sum+1;

             };



        };
        cout<<sum<<endl;

};
};






int main(){
    tripal to;
    to.funda();

return 0;
    };
