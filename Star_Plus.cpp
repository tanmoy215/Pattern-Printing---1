#include<iostream>
using namespace std;
int main(){
    int  n;
    cout<<"enter odd number : ";
    cin>>n;
    int mid = n/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==(mid+1) || j==(mid+1)){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
            
        }
        cout<<endl;
    }
}