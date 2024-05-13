#include <iostream>
using namespace std;

/*
 * The linker error is when the linker is having trouble linking all the object files together to create an executable.
 * Ex: Library or projec file missing.
 * user -c command along with g++ to just compile
*/

extern int x;
int main(){
    cout<< "Hello World" << endl;

    cout<< x; 

    return 0;
}
