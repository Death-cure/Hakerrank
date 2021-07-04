#include<bits/stdc++.h>
using namespace std;
class tripal{
public:
     int funda(){
     int n;
      cin>>n;
     long long int ar[n];

     long long int sum= 0;
     for (int i=0;i<n;i++){
     cin>>ar[i];

     sum = sum + ar[i];
     };
     cout<<sum<<endl;
     };
};

int main(){
tripal to;
to.funda();

return 0;


};
