    #include <iostream>
    using namespace std ;
    /*                          Lucky Division
     * at first we need to in declare an integer variable to get the number
     * get the number from the user.
     * at this problem we can slove it without using loops at all as follows.
     * as we can see the range of the possible number you will get from the user is from 1 to 1000, and as you know if we want to divid number (a) by (b) then the maximum possible value for (b) is (a) .
     * if you notice, the number of lucky numbers in that range is 14 (4 , 7 , 44 , 74 , 47 , 77 , 444 , 447 , 474 , 477 , 744 , 747 , 774 , 777) , so if the given number is divisible by any of the previous numbers then it's absolutely an almost lucky number .
     * so we will use conditions only.
     * Prepared By: Ahmed Mohsen (group 8).
     */
    int main ()
    {
        int n ;
        cin>>n;
        if(n%4==0 || n%7==0 || n%44==0|| n%47==0 || n%74==0 ||n%77==0 || n%444==0 || n%447==0 || n%474==0 || n%744==0 || n%477==0 || n%747==0 || n%774==0 || n%777==0 )
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        return 0;
    }
