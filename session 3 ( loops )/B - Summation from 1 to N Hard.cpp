#include <iostream>
using namespace std ;
/*                           Summation from 1 to N Hard ( mathematical solution and super efficient )
 * at first we need to in declare integer variable to get the value from user
 * get the value
 * and we just use the formela (n*(n+1))/2 to get the summation
 * and then print it
 Prepared By: Ahmed Mohsen (group 8)
 */
int main (){
long long n ;
cin >> n ;
cout << (n *( n + 1)) /2 ;
}
/*                           Summation from 1 to N Hard ( the easy way but not efficient )
 * at first we need to in declare integer variable to get the value from user
 * get the value
 * we can implement any type of loops ( while , for , do while )
 * we need too another variable of long long type  initialize it with zero
 * make a condition for the loop from one to the given number ( 1 : n )
 * print the summation of all numbers form one to the given number

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
