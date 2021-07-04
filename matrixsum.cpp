#include<bits/stdc++.h>
using namespace std;
class tripal{
public:
void funda(){
int n;
cin >>n;
int ar[n][n];

for(int row=0;row<n;row++){
   for (int coloum = 0;coloum<n;coloum++){
   cin>>ar[row][coloum];
   };
};
int sum =0;
  for (int a=0;a<n;a++){

   sum = sum+ar[a][a];

  };
  int leftsum =0;
  for(int b=0;b<n;b++){

  leftsum = leftsum+ar[b][n-b-1];


  };
    cout<<abs(leftsum-sum)<<endl;
};
};
int main(){

tripal to;
to.funda();

};
