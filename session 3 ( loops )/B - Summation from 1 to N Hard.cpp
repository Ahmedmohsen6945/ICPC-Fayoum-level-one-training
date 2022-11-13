#include <iostream>
using namespace std ;
/*                           Summation from 1 to N Hard ( mathematical solution and super efficient )
 * at first we need to in declare integer variable to get the value from user.
 * get the value.
 * and we just use the formula (n*(n+1))/2 to get the summation. ---->  /// the proof of the mentioned formula as follows:
 * and then print it.                                                   /// if we want the summation of the first n numbers 
 Prepared By: Ahmed Mohsen (group 8).                                   /// S(n)=1+2+3+....+(n-1)+n   ///S(n)=n+(n-1)+....+3+2+1
 */                                                                     /// now add Now add the two series together term by term.
int main (){                                                            /// 2 S(n) = (n+1) + (n-1+2) + (n-2+3) + … + (3+n-2) + (2+n-1) + (1+n) = (n+1) + (n+1) + (n+1) + … + (n+1) + (n +1) + (n+1) = n(n+1)
long long n ;                                                           /// so s(n) = (n*(n+1))/2  
cin >> n ;                                                           
cout << (n *( n + 1)) /2 ;
}
/*                           Summation from 1 to N Hard ( the easy way but not efficient )
 * at first we need to in declare integer variable to get the value from user.
 * get the value.
 * we can implement any type of loops ( while , for , do while ).
 * we need too another variable of long long type  initialize it with zero.
 * make a condition for the loop from one to the given number ( 1 : n ).
 * print the summation of all numbers form one to the given number.

int main()
{
long long n , sum = 0  ;
cin >> n ;
for (int i = 1 ; i <= n ; i++ ) {
    sum += i;
}
cout << sum ;
}
 */
