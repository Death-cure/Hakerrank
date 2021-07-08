#include<bits/stdc++.h>
using namespace std;
class tripal{
 public:
  void funda(){
  int n;
  cin>>n;
  int ar[n];
  for(int i=0;i<n;i++){
  cin>>ar[i];
  };


  for(int a=0;a<n;a++){
  if(ar[a]<38){
  cout<<ar[a]<<endl;}
  else if( ar[a]>=38){
  int x = ar[a]%5 ;
  int y = 5-x;
   if (y<3){
    cout << ar[a]+y <<endl;
   }
   else if (y>=3){

   cout<<ar[a]<<endl;
};
};

  };


  };
};
int main (){
tripal to;
to.funda();
return 0;
};
