#include<iostream>
using namespace std;

int value(int n){
      return abs(n);
}

int main(){
      // abs value find 
      int n;
      cout<<"Enter A number : ";
      cin>>n;

      value(n);
      cout<<"After abs value used"<<endl;
      cout<<value(n)<<endl;

      return 0;

}
