#include<bits/stdc++.h>
using namespace std;
 const int N = 1e7+10;
long long arr[N];

int main (){ 
    cout <<"start" << endl;
int n, m;
cin >>n>>m;

long long int gc =0;


while(m--){
    int a,b,k;
    cin>>a>>b>>k;
    for(int i = a; i<=b; i++){
        arr[i] = arr[i]+ k;
    }
   
}
for(int i = 1 ; i<= n; i++){
    gc = max(gc , arr[i]);
   }

 cout<<gc<<endl;

    return 0;
}