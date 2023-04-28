#include<bits/stdc++.h>
using namespace std;
 
 int main (){
    //  design 2d array
    // size of array
    int sum = 0;

    int m,n;
    cout<<"size of array in form of (n x m)"<<endl;
    cin>>m>>n;
    int array[n][m];
    // array input 
    cout<<"array element  "<<endl;
    for(int i=0 ; i<n;i++){
        for(int j=0;j<m;j++){
            cin>>array[i][j];
        };
    };
      // input kaha se kaha tak ka sum required hai 
      cout <<"range of sum in the form of (a x b) , (c x d) "<< endl;
      int a,b,c,d;
      cin>>a>>b>>c>>d;   // (a,b) to (c,d)
      for(int i =a ; i<=c;i++){
        for(int j=b;j<=d;j++){
            sum = sum + array[i][j];
        }
      }

      cout << sum;


 }