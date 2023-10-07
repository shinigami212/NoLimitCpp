#include<iostream>
using namespace std;
int pow(int n,int x);
int main(){
int n,x;
cout<<"Enter the number: "<<endl;
cin>>n;
cout<<"Enter the power: "<<endl;
cin>>x;
int num=pow(n,x);
  cout<<"The power of number: "<<num;
return 0;
}
int pow(int n,int x){
    int a=n;
    for (int i = 1; i <x; i++)
    {
        a=a*n;
    }
    return a;
}
