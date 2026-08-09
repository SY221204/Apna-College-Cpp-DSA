#include <iostream>
using namespace std;


//Question2: Enter cost of 3items from the user(using float data type)- a pencil,a pen and an eraser. You have to out put the total cost of the items back to the user as their bill.
//(Addon: You can also try adding 18%GST tax to the items in the bill as an advanced problem)


int main(){
    float pencil;
    float pen;
    float eraser;

    cout<<"Enter price of pencil ; ";
    cin>>pencil;

    cout<<"Enter price of pen ; ";
    cin>>pen;

    cout<<"Enter price of  eraser : ";
    cin>>eraser;

    float sum = pencil + pen + eraser;
    float gst = (sum * 0.18);
    float total = sum + gst;

    cout<<"Total price of your items : "<<sum<<endl;
    cout<<"Total price of your items with GST : " <<total<<endl;
    return 0;
} 
