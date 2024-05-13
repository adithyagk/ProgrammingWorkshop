#include <iostream>
using namespace std;

int main(){

    /*This is an example of compiler warning, the variable is not assigned :: [-Wuninitialized]
    int fav_number;
    cout<< fav_number;*/

    /*This is an example of compiler warning, the variable is assigned but never useed :: [-Wunused-variable]
    int fav_number = 100;
    cout << "HI" << endl;
    */
    return 0;
}
//Compiler warnings happen when there is no error logically but compiler is not able to understand something.