//checking the no odd or even
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
        int c=(n&1);
        if(c==1){
            cout<<"odd";
        }
        else{
            cout<<"even";
        }
    
}