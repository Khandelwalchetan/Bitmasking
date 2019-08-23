//suppose a and b min no of bits need to change to convert a to b
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int c=a^b;
    //cout<<c;
    //now count setbits
    int count=0;
    while(c>0){
        count = count +(c&1);
        c=c>>1;
    }
    cout<<count;


}