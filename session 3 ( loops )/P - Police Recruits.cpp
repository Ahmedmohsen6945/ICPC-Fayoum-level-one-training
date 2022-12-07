#include <iostream>

using namespace std ;

int main() {
int n , pol=0 , crm=0 , tst ; cin >> n;
    for (int i = 0; i < n ; ++i) {
        cin >> tst ;
        if (tst < 0 && pol > 0)
            pol-- ;
        else if (tst < 0 && pol <= 0)
         crm ++ ;
        else
            pol+=tst ;
    }
    cout<<crm;
}
