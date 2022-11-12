#include <iostream>
using namespace std ;
/*                           Multiplication table
 * at first we need to in declare an integer variables get the number of multiplication table.
 * get the number of the multiplication table.
 * we can implement any type of loops ( while , for , do while ).
 * make a condition for the loop from one to the twelve ( 1 : 12 ).
 * and then print (the given number " * "  counter " = " the value of this operation ).
 * Prepared By: Ahmed Mohsen (group 8).
 */
int main () {
    int n ;
    cin >> n;
    for (int i = 1; i <= 12; ++i) {
        cout << n << " * " << i << " = " << i*n << endl;
    }

}
