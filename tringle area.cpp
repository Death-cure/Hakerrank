#include<bits/stdc++.h>
using namespace std;
class funda{
public:
double triangle(double x, double y){

double area= .5*x*y;
 cout<< area<<endl;
};


      double inp(){double a,b;
      cout<<"Enter the base value"<<endl;
      cin>> a;
       cout<<"Enter the height value"<<endl;
      cin>>b;
      cout<<"The area of following tringle is :"<<endl;
          double surface=a*b*.5;
          cout<<surface;
      };



};
int main(){

funda fo;
fo.triangle(0,3);
fo.inp();


return 0;
};
