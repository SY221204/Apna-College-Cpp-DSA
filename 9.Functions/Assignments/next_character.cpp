#include <iostream>
using namespace std;

char nextCharacter(char ch){
    if (ch == 'z'){
        return 'a';
    }
    return ch + 1;
}

int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    char nextChar = nextCharacter(ch);
    cout << "Next character is: " << nextChar << endl;

    return 0;
}