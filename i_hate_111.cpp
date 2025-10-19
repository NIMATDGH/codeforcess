#include <bits/stdc++.h>
using namespace std;
bool answer(int n){
    int reminder=n%11;
    if(n>reminder*111){
        return true;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    int inputs[t];
    for(int i=0;i<t;i++){
        cin>>inputs[i];

    }
    for(int i=0;i<t;i++){
        if(answer(inputs[i])){
            cout<<"YES \n";
        }
        else{
            cout<<"NO \n";
        }
    }
}
