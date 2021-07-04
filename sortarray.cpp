#include<bits/stdc++.h>
using namespace std;
class tripal{
public:
 void funda(){
 int n=5;

 int ar[n];
 for(int i=0;i<n;i++){
    cin>>ar[i];
  };


  sort(ar,ar+n);
  //for(int a=0;a<n;a++){
  //cout<<ar[a];
  //};
int minsum=0;
int maxsum=0;
for(int b=0;b<n-1;b++ ){

     minsum=minsum+ar[b];
   };

   cout<<minsum;
for( int c=1;c<n;c++){
maxsum=maxsum+ar[c];
};
cout<<" ";
cout<<maxsum;
 };
};
int main (){

tripal to;
to.funda();
return 0;
};
