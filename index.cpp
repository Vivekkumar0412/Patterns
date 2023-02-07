#include<bits/stdc++.h>
using namespace std;
void recpat(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<" * ";
        };
        cout<<endl;
    }
};


int main(){
    cout<<"Patterns"<<endl;
    int n = 10;
    // recpat(n);
    hollowrec(n);
    return 0;
};
