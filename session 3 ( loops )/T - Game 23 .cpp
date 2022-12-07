#include <iostream>

using namespace std ;

int main() {
    int a , b ; cin >> a >> b ;
    int div = b/a , cnt = 0;
    while( div > 1 ){
        if ( div % 2 == 0 ) {
            div /= 2 ;
            cnt++ ;
        }
        else if ( div % 3 == 0 ) {
            div /= 3 ;
            cnt++ ;
        }
        else
            break ;
    }
    if ( div!=1 || b%a != 0 )
        cout << -1 ;
    else
        cout << cnt ;
}
