#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number ";
    cin>>x;
    int sum=0;
    cout<<"First "<<x<<" Natural Numbers Are : ";
    for(int i=1;i<=x;i++){
        cout<<i<<" ";
        sum+=i;
    }   
    cout<<"The Sum is :"<<sum;
}