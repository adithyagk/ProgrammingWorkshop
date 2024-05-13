#include <iostream> //pre-processors dont take semi colon

using namespace std;

int main(){// return type is integer

    int fav_number;
    cout << "Enter a number between 1 and 100:" << endl; // << - Insertion Operator
    cin >> fav_number; // >> - Extraction Operator , extract something from user.

    cout<< "The selected number is" << endl; //endl -> flush out buffers, points cursor to next line

    return 0; // Main returns an integer (0-> everything is good)
}


/*
*Building -> Compile, Linking(with external libraries and files if required)  this creates exe file-> generates executable.
*Execute the code
*/ 