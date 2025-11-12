// 2. Sum of First 10 Natural Numbers

#include<iostream>
using namespace std;
int main(){
int x;
cout<<"Enter the x ";
cin>>x;
cout<<"Sum of First 10 Natural Numbers Are :";
int sum=0;
for(int i=1;i<=x;i++){
    sum=sum+i;
}
cout<<sum;
}