#include <bits/stdc++.h>
using namespace std;


int main(){
    int book_counts;
    int time;
    int time_spent=0;
    int counter=0;

    vector<int> books;
    cin>>book_counts>>time;
    
    for(int i=0;i<book_counts;i++){
        int z;
        cin>>z;
        books.push_back(z);
    }
    vector<int> subarray;
    
    int maxcount=0;
    for(int i=0;i<book_counts;i++){
        subarray.push_back(books[i]);
        time_spent+=books[i];
        while(time_spent>time){
            time_spent-= *subarray.begin();
            subarray.erase(subarray.begin());
            
        }
        counter=subarray.size();
        maxcount=max(counter,maxcount);


    
    }
    cout<<maxcount;

    
    

   
   
}
