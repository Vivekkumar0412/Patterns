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

void hollowrec(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(i == 1 || i == n || j ==1 || j == n){
                cout<<"*";
            }else{
                cout<<" ";
            };
        };
        cout<<endl;
    }
};

void rotaterstar(int n){
    for(int i = 1; i<n; i++){
        for(int j = 1; j<=i; j++){
            cout<<"*";
        };
        cout<<endl;
    };

    for(int i = 1; i<=n; i++){
        for(int j = i; j<=n; j++){
            cout<<"*";
        };
        cout<<endl;
    }
};


int main(){
    cout<<"Patterns"<<endl;
    int n = 10;
    recpat(n);
    hollowrec(n);
    rotaterstar(n);
    return 0;
};
