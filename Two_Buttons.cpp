#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    if(n >= m) cout << n - m;
    else{
        int count=0;
        while(n!=m){
            if(m%2==0){
                m=m/2;
                count++;
            }
            else{
                m+=1;
                count++;
            }
            if(m<n){
                count+=n-m;
                break;
            }
        }
        cout<<count;
    }
    
    return 0;
}
