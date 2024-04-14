#include <iostream>
using namespace std;
int main() {
  int n1,n2,n3,a;
  cout << "Please enter your integer first value: ";
  cin>>n1;
  cout << "Please enter your integer second value: ";
  cin>>n2;
  cout<<"Please choose your operation: \n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
  cin>>a;
  enum Operation { Addition = 1, Subtraction = 2, Multiplication = 3, Division = 4 };
  if(a==Addition ){
    n3=n1+n2;
    cout<<n3;
  }else if(a == Subtraction){
    n3=n1-n2;
    cout<<n3;
  }else if ( a == Multiplication){
    n3=n1*n2;
    cout<<n3;
  }else if (a == Division){
    n3=n1/n2;
    cout<<n3;
  }else{
    cout<<"Invalid input ";
  }
  return 0;
}