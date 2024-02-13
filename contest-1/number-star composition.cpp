#include<iostream>
using namespace std;

int main(){
    int r, c;
    int n;
    cin>>n;
    for(r=1; r<=n; r++){
        for(c=n; c>=1; c--){
            if(c==r){
                cout<<"*";
            }
            else{
                cout<<c;
            }

        }
        cout<<endl;
    }
    return 0;
}
