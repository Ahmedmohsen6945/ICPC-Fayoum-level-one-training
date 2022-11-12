    #include <iostream>
    using namespace std ;
    /*                           Factorial
     * at first we need to in declare two integer variables one of them to get the number of test cases from the user and the second one to get the number which we want to calculate it's factorial .
     * get the number of the test cases.
     * we can implement any type of loops ( while , for , do while ) for the test cases or the operation itself.
     * make a condition for the loop from one to the number of test cases( 1 : ts ) in the outer loop.
     * now declare an long long variable (let's call it fact variable) and initialze it with one because it's the neutral element of multiplication .
     * make a condition for the loop from one to the number of the factorial( 1 : fact ) in the iner loop.
     * and in ever single iteration we will multiply the counter of the iner loop in fact variable.
     * finaly, print fact variable.
     * Prepared By: Ahmed Mohsen (group 8).
     */
    int main () {
        int ts ;
        cin >> ts;
        for (int i = 1; i <= ts; ++i) {
            int n ;
            long long fact = 1;
            cin >> n ;
        for (int j = 1 ; j <= n ; j++ ) {
            fact *= j;
        }
        cout << fact << endl;
        }

    }
