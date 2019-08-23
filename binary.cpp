#include <iostream>
using namespace std;
void convert(int n){
    int a[64];
    int i=0;
    while(n>0){
        a[i]= n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        cout<<a[j];
    }
}
int main() {
    //for converting a no into its binary
    int n;
    cin>>n;
    convert(n);
}
