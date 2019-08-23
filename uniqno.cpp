#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //for getting unique no from list of numbers
    int c=0;
    for(int i=0;i<n;i++){
        c=c^a[i];

    }
    cout<<c;
}