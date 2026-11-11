#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    int flag=0;
    for(int i=2;i<x;i++){
        if(x%i==0)
        flag=1;
    }
    if (x==0 || x==1)
    cout<<"This is neither prime nor composite number ";
    else if (flag)
    cout<<"It is a composite number";
    else 
    cout<<"It is a prime number";
    return 0;
}