#include<iostream>
using namespace std;


int main(){
    int number;
    cout << "Enter a favrouite number between 1 and 100"<<endl;
    cin >> number;

    //cout << "Amazing!! That's my favroite number too \n No really!!" + string(number) + "is my favroite number!";
    /*
     * This is how i wrote it initially, but we face an issue here. We cant concat two strings or an integer directly.
     * Use multiple insertion operators
    */
    cout << "Amazing!! That's my favroite number too \n No really!!" << number << " is my favroite number!"<<endl;
   
    // if we need to concat with + operator then we need to let it know that the 2nd part is holding parity with first part.
    //cout << "Amazing!! That's my favroite number too \n No really!!" + string("is my favroite number!");
}