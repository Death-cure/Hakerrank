#include<bits/stdc++.h>
using namespace std;
 class tripal{
   public:
   void funda(){
   long int s ,t,a,b ,m,n ;
   cin>>s>>t>>a>>b>>m>>n;
   int ar1[m];
   int ar2[n];
   for(int i =0;i<m;i++){
    cin>>ar1[i];
   };
   for(int a=0;a<n;a++){
    cin>>ar2[a];
   };

     long int mangosum =0;
     for( long int p=0;p<m;p++){     // for mango on sam's house
     int x=s-a;
     if(ar1[p]>=x&&ar1[p]<=t-a){
     mangosum=mangosum+1;
     };

     };
    long int orangesum=0;
     for( long int c=0;c<n;c++){    //for orange on sam's house
     int y =t-b;
     if (y>=ar2[c]&&ar2[c]>=s-b){

     orangesum=orangesum+1;

     }

     };
     cout<<mangosum<<endl;
     cout<<orangesum<<endl;


   };
 };
 int main(){
 tripal to;
 to.funda();
 return 0;
 };
