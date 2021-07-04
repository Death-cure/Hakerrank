#include<bits/stdc++.h>
using namespace std;
class tripal{
public:
     void funda(){
 int H;
 int M;
 int S;
 string TZ;

 cin>>H>>M>>S>>TZ;

 if (H+12==24 &&TZ=="AM"){
 cout<<"00"<<":"<<M<<":"<<S<<endl;
 }


 else if(H==12&&TZ=="PM"){
   cout<<H<<":"<<M<<":"<<S<<endl;
 }
 else if(H==12&&TZ=="AM"){

cout<<H+12<<":"<<M<<":"<<S<<endl;
}
else if(TZ=="AM"){
   cout<<H<<":"<<M<<":"<<S<<endl;
 }
 else if(TZ=="PM"){

cout<<H+12<<":"<<M<<":"<<S<<endl;
};
 };

};

int main (){
tripal to;
to.funda();
return 0;
};
