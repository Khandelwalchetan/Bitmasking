#include <iostream>
#include<cstring>
using namespace std;
void filterchars(char *a,int no){
    int i=0;
    while(no>0){
        (no&1)?cout<<a[i]:cout<<"";
        i++;
        no=no>>1;
    }
    cout<<endl;
}
void generatesubsets(char *a){
    //generate range of numbers from 0 to 2^n -1
    int n=strlen(a);
    int range=(1<<n)-1;
    for(int i=1;i<=range;i++){
        filterchars(a,i);
    }


}
int main() {
    char a[100];
    cin>>a;
    generatesubsets(a);
}
