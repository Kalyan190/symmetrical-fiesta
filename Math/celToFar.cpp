#include<iostream>
using namespace std;

double convert(double temp){
      return (double)(9*temp)/5 + 32;
}

int main(){
     
     double temp;

      cout<<"Enter temp in degree celcious :";
      cin>>temp;

      convert(temp);
      cout<<"farenheit -->> " << convert(temp)<<endl;

      return 0;


}