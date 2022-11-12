#include <iostream>
using namespace std ;
/*                           Even, Odd, Positive and Negative
 * at first we need to in declare six integer variables one of them to get the number of integers from user , another one to get the integers in the loop and the rest of them to count the number of even , odd , positive and negative numbers
 * number of integers from user
 * we can implement any type of loops ( while , for , do while )
 * make a condition for the loop from one to the given number ( 1 : n )
 * get integer from user in every iteration
 * and if this integer is even increase the specific variable by one , and so on with the other types of numbers
 * print the number of even , odd , positive and negative numbers every , value in a single line
Prepared By: Ahmed Mohsen (group 8)
*/
int main () {
    int n, num, ev, od, ne, po;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> num;
        if (num % 2 == 0)
            ev++;
        else
            od++;
        if (num > 0)
            po++;
        else if (num < 0)
            ne++;
    }
    cout << "Even: " << ev << endl << "Odd: " << od << endl << "Positive: " << po <<endl<< "Negative: " << ne << endl;

}
