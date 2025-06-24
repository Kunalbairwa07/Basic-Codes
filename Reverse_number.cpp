#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enetr = ";
    cin>>n;
    while (n>0){
        int lastdig = n%10;
        cout<<" "<<lastdig;
        n=n/10;
    }
    
    return 0;
}