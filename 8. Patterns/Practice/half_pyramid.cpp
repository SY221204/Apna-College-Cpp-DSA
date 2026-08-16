#include <iostream>
using namespace std;

int main (){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<j<<" ";                    // we have chose j because if we put i it will give output like 1; 22; 333; 4444; .......
        }
    cout<<endl;
    }

    return 0;

}