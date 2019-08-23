#include <iostream>
using namespace std;
int identifybit(int n,int i){
    return (n&(1<<i))!=0?1:0;
}
int setbit(int n,int i){
    int mask=1<<i;
    return n=n|mask;
}
int clearbit(int n,int i){
    int mask=~(1<<i);
    return (n&mask);
}
int main() {
    int n,i;
    cin>>n>>i;
    //for identifying the ith bit
    //cout<<identifybit(n,i);

    //setting the ith bit to 1
    //cout<<setbit(n,i);

    //clear ith bit to 0
    cout<<clearbit(n,i);
    
    
}
