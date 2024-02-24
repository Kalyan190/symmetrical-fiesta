#include<iostream>
using namespace std;

int gcd(int a,int b){
      while(b != 0){
            int temp = b;
            b = a%b;
            a = temp;
      }
      return a;
}


int main(){
      int a,b;
     cout<<"Enter a and b : ";
     cin>>a>>b;

     gcd(a,b);

     cout<<"Gcd of two number : "<<gcd(a,b);

     return 0;
}