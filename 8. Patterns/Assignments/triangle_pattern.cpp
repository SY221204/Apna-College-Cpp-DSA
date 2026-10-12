//Question 1 : Print the 0-1 Triangle Pattern

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    bool val = true;

    for(int i = 1; i < n; i++){ //inner loop
        for(int j = 1; j <= i ; j++){
            cout<< val << " ";
            val = !val;

        }
        cout<< endl; 


    }
    return 0;
}
