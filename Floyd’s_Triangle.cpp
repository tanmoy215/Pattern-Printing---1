#include<iostream>
using namespace std;
int main(){
    int  n;
    cout<<"enter odd number : ";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
          cout<<a<<" ";
          a++;
        }
        cout<<endl;
    }
}