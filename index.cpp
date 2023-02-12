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

void star(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<= n-i; j++){
            cout<<" ";
        };
        for(int k = 1; k<= i*2-1; k++){
            cout<<"*";
        };
        for(int m=1; m<= n-1; m++){
            cout<<" ";
        };
        cout<<endl;
    };
};

void invertedstar(int n){
    int c =n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<" ";
        };
        for(int k = 1; k<=c; k++){
            cout<<"*";
        };
        c = c-2;
        for(int m = 1;m<=i;m++){
            cout<<" ";
        };
        cout<<endl;
    };
}


int main(){
    cout<<"Patterns"<<endl;
    int n = 10;
    recpat(n);
    hollowrec(n);
    rotaterstar(n);
    star(n);
    invertedstar(n);
    return 0;
};
