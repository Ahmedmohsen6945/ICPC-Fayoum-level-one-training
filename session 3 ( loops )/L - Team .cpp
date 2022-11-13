#include <iostream>
using namespace std ;
/*                            Team
 * at first we need to in declare four integer variables one of them to take the number of problems, and the second one to know if this participant is sure about problem's solution, and the third one to count how many participant is sure about the current problem (let's call it cntin) , and the last one to count the final number of solved problems (let's call it cntout).
 * get the number of problems.
 * we can implement any type of loops ( while , for , do while ) for the following operation.
 * make a condition for the loop from one to the number of problems ( 1 : prb ).
 * in the body of the loop we will get the value of the first , second and third participant.
 * if the value of the current participant is equal to 1 the counter will be increased by one .
 * if the cntin variable is greater than or equal to 2 , then cntout variable will be increased by one .
 * at the end of this prosses we should have the total number of solved problems in that contest (cntout).
 * Prepared By: Ahmed Mohsen (group 8).
 */
int main() {
   int n ;
   cin >> n ;
   int du , cntin , cntout = 0 ;
    for (int i = 1; i <= n ; ++i) {
        cntin=0;
        cin >> du ;
        if (du)
            cntin++;
        cin >> du ;
        if (du)
            cntin++;
        cin >> du ;
        if (du)
            cntin++;
        if (cntin >= 2)
            cntout++;
    }
    cout << cntout;
}
