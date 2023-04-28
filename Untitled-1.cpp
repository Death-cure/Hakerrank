#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
     cout<<"start"<<endl;
     
    while(true){
     
        string s1;
        cin>>s1;
        transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
      //   s1.upper();
        cout<<s1<<endl;
    }

    return 0;
}