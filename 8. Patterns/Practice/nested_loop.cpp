#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value you want to make pattern for: ";
    cin>>n;

    for(int i = 1; i <= n; i++){ //inner loop
        for(int j = 1; j <= n; j++){
            cout<< i << " ";

        }
        cout<< endl; 

    }
    return 0;
}
