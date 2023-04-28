#include<bits/stdc++.h>
using namespace std;
 
    int a[100000];
int main(){
    int n;
    cin>>n;
      a[n];
      int b[n];
      for (int i=0;i<n;i++){
        cin>>a[i];
      };
      int sum = 0 ;
      for (int i=0;i<n;i++){
        sum= sum+ a[i];
        b[i]= sum;
      }
  
  int q;
  cin>>q;
  while(q--){
    int l, r;
    cin>>l >> r;
    cout<< b[r]- b[l-1]<<endl;
  }


   
}
