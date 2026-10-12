#include <iostream>
using namespace std;

void sayHello(){
    cout<< "Hello :) \n";
}


void assistant(){
    sayHello();
    cout<< "Work done \n";
}

// int main(){
//     sayHello(); //function call
//     return 0;
// }

int main(){
    assistant();
    return 0;
}