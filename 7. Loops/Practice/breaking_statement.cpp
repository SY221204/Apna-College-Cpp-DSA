#include <iostream>
using namespace std;


// Break Statement

/* int main (){
    int i = 1;
    while (i <= 10){
       if( i == 3){
        break;
       }
       cout<<i<<endl;
       i++;
    }
    return 0;
} */




// Question:  Write a Programe where user can keep entering numbers till they enter multiple of 10.

int main()
{
    int n;
    do
    {
        cout << "enter your number: ";
        cin >> n;
        if (n % 10 == 0)
        {
            break;
        }
        cout<<"your entered number :"<<n<<endl;

    } while (1 > 0);
    return 0;
}   