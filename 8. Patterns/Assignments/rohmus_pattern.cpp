#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value you want to make pattern for: ";
    cin>>n;

    for(int i = 1; i <= n; i++){ //inner loop

        //space
        for(int j = 0; j <= n-i-1; j++){
            cout<< " ";

        }
        //stars
        for(int j = 0; j<n; j++){
            cout<<"*";
        }
        cout<< endl; 

    }
    return 0;
}
