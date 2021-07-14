#include<bits/stdc++.h>
using namespace std;
class tripal{
public:

void funda(){
 long long  int n;
cin>>n;
 long long int ar1[n];
 ar1[0] =1;
 for( long int x=0;x<n;x++){
   ar1[x+1] = ar1[x]+2;
};

 for( long int i=1;i<=n;i++){
 for( long int y=i-1;y<n;y+=i){
   ar1[y]=ar1[y]+1;

      };
 };
  long int sum=0;
 for(long int a=0;a<n;a++){


 if(ar1[a]%2 == 0){
 sum =sum+1;

 };
 };
 cout<<sum<<endl;

};

};
int main (){
tripal to;
to.funda();
return 0;
};
