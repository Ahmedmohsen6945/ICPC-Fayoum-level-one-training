#include <iostream>
using namespace std ;
/*                           Max
 * at first we need to in declare three integer variables one of them to get the number of integers from user , another one to get the integers in the loop and another one and initialize it with some negative value like (-1).
 * number of integers from user.
 * we can implement any type of loops ( while , for , do while ).
 * make a condition for the loop from one to the given number ( 1 : n ).
 * get integer from user in every iteration.
 * and if this integer is greater than that variable which we initialized it with some negative value , we well will replace this value with this integer.
Prepared By: Ahmed Mohsen (group 8).
*/
int main () {
    int n, num , mx = -1 ;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> num;
        if (num > mx  )
            mx=num;
    }
    cout << mx;
}
