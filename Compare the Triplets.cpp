#include<bits/stdc++.h>
using namespace std;
class tripal{
public:
 void funda(){
int a[3];
int b[3];
int  Bawarded =0;
int  Aawarded=0;
for (int i=0;i<3;i++){
cin>>a[i];
};
 for(int x=0;x<3;x++){
 cin>>b[x];
 };
 for(int y=0;y<3;y++){
 if(a[y]>b[y]){

  Aawarded = Aawarded+1;

 };

 if(a[y]<b[y]){
 Bawarded=Bawarded+1;

 };
 if(a[y]==b[y]){

 };
 };
 cout<< Aawarded<<
 " ";
 cout<<  Bawarded;
 };
};
int main (){
tripal to;
to.funda();
return 0;
};
