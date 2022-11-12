    #include <iostream>
    using namespace std ;
    /*                           Two Elevators
     * at first we need to in declare one integer variable to get the number of test cases from the user.
     * get the number of the test cases.
     * we can implement any type of loops ( while , for , do while ) for the test cases.
     * make a condition for the loop from one to the number of test cases( 1 : ts ) in the outer loop.
     * now declare integer variables  a , b , c and time , these variales represnet the floors and the time .
     * as we see the first elevator takes a-1 seconds to reach the first (ground) floor , and the second one takes (|c-b|+c-1) to reach the first (ground) floor .
     * finaly,we will compare which of them is better to use and print it's number.
     * Prepared By: Ahmed Mohsen (group 8).
     */
    int main () {
        int ts ;
        cin >> ts;
        for (int i = 1; i <= ts; ++i) {
            int a , b , c , time ; cin>>a >> b >> c ;
            a--;
            if ( c >= b)
                time = (c - b) + c - 1 ;
            else
                time = (b - c) +  c - 1 ;

            if(a < time)
                cout<<"1";
            else if(a > time)
                cout<<"2";
            else
                 cout<<"3";

            cout<<endl;
                }
    }
