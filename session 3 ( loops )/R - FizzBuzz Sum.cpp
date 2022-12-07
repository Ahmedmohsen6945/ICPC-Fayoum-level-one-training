#include <iostream>

using namespace std ;

int main() {
long long n , sum =0 ;
cin >> n;
    for (int i = 1; i <= n ; ++i) {
        if (i % 3 == 0 || i % 5 == 0 )
            continue;
        sum += i ;
    }
    cout << sum ;
}
