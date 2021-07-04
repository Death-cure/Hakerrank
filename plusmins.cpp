#include<bits/stdc++.h>
using namespace std;
class tripal{
public:
void funda(){
    int n;
    cin >> n;
   float ar[n];
   for(int i=0;i<n;i++){
   cin>>ar[i];
    };


    double rightsum=0;
    double zerosum=0;
    double leftsum=0;


    for(int a=0;a<n;a++){

    if (ar[a]<0){
    leftsum=leftsum+1;
};



   if (ar[a]>0){
    rightsum=rightsum+1;

};

   if (ar[a]==0){
    zerosum=zerosum+1;
};

};

 cout<<setprecision(4)<<rightsum/n<<endl;
  cout<<setprecision(4)<<leftsum/n<<endl;
  cout<<setprecision(4)<<zerosum/n<<endl;



};};
int main (){

tripal to;
to.funda();

return 0;
};
