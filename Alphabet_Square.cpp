#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter line : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        int a=65;
        for(int j=1;j<=n;j++){
            char ch=(int)a;
            cout<<" "<<ch;
            a++;
        }
        cout<<endl;
    }
}