#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, s;
    cin >> m >> s;
    int save=m;
    int saves=s;

    if(m==1 and s==0){
        cout<<"0 0";
        return 0;
    }

    if (s == 0 || s > m * 9) {
        cout << "-1 -1";
        return 0;
    }

   


        deque <int> min;
        while(s>1){
            if(s>9){
                min.push_front(9);
                s-=9;
                m-=1;
            }
            else{
                min.push_front(s-1);
                s-=s-1;
                m-=1;
            }
        }
         for(int i=0;i<m;i++) min.push_front(0);
         min[0]+=1;

        for(int d : min) cout << d;


    cout<<" ";
    m=save;
    s=saves;

     vector<int> digits;
    while (s > 0) {
        if (s > 9) {
            s -= 9;
            digits.push_back(9);
            m -= 1;
        } else {
            digits.push_back(s);
            s = 0;
            m -= 1;            
        }
    }

   
    for (int i = 0; i < m; i++) digits.push_back(0);

    
    for (int d : digits) cout << d;
        
        
            
}

