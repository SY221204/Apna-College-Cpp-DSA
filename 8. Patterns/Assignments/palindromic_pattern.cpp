#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value you want to make pattern for: ";
    cin>>n;

    for(int i = 1; i <= n; i++){ //inner loop
        //spaces
        for(int j = 1; j <= n-i; j++){
            cout<< " ";
        }
        //nums backward
        for(int j = i; j>=1; j--){
            cout <<j;

        }

        //nums forward
        for(int j =2; j<=i; j++){
            cout<<j;
        }
        
        cout<< endl; 

    }
    return 0;
}
