#include <iostream>
using namespace std;

int main(){

    int fav_number;
    cout << "HI" << endl;
    cin >> fav_number; 

    cout<< "The selected number is" << endl; 

    return 0;

    //Lets return a string when the main expects an integer, run this to get a compile error. 
    //return "joe"; 
}
//Semantic error is when compiler is not able to define a meaning
//Errors which we encounter at compile time