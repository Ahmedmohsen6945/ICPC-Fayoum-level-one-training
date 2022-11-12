#include <iostream>
using namespace std ;
/*                            Division?
 * at first we need to in declare two integer variables one of them to get the number of integers from user , another one to get the integers in the loop
 * get the number of integers from user
 * we can implement any type of loops ( while , for , do while )
 * make a condition for the loop from one to the given number ( 1 : n )
 * get integer from user in every iteration
 * and if this integer is less than 1400 print division 4 and if it greater than or equal to 1400 and less than 1600 print division 3 and if it greater than or equal to 1600 and less than 1900 print division 3 else print division 1
Prepared By: Ahmed Mohsen (group 8)
*/
int main () {
    int n, num ;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> num;
        if (num < 1400  )
            cout << "Division 4\n";
        else if(num >= 1400 && num < 1600)
            cout << "Division 3\n";
        else if(num >= 1600 && num < 1900)
            cout << "Division 2\n";
        else
            cout << "Division 1\n";

    }
}
