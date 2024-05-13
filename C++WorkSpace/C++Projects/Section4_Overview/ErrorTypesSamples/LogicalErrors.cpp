#include <iostream>
using namespace std;

/*
 * Logical errors are errors which comes from personal logic.
 * code is correct syntactically but logic is wrong
*/

extern int x;
int main(){
    /*
     * lets write a logic to determine that people above or equal to 18 can vote
    */
   int age;
   cout << "Enter your age";
   cin >> age;
   if(age > 18){
    cout<< "This user can vote";
   }
   // The code is correct but the problem is that the logic is incorrect, user should be above or equal to 18 to vote
}   
