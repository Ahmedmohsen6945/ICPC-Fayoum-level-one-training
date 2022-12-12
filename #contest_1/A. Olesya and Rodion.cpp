
#include <bits/stdc++.h>


using namespace std;

const double PI  = acos(-1.0);
typedef complex<double> point ;
#define ll long long
#define ve vector<ll>
#define loop(i , n){}     for(ll (i) = 0; (i) < (n); (i)++)
#define loop1(i , n)     for(ll (i) = 1; (i) <= (n); (i)++)
#define tc          ll testcase;   cin>>testcase;   while(testcase--)
#define all(v)      (v).begin(), (v).end()
#define xp real()
#define yp imag()
#define angle(a)                (atan2((a).imag(), (a).real()))
#define vec(a,b)                ((b)-(a))
#define same(p1,p2)             (dp(vec(p1,p2),vec(p1,p2)) < EPS)
#define dp(a,b)                 ( (conj(a)*(b)).real() )	// a*b cos(T), if zero -> prepc
#define cp(a,b)                 ( (conj(a)*(b)).imag() )	// a*b sin(T), if zero -> parllel
#define length(a)               (hypot((a).imag(), (a).real()))
#define normalize(a)            (a)/length(a)
//#define polar(r,ang)            ((r)*exp(point(0,ang)))  ==> Already added in c++11
#define rotateO(p,ang)          ((p)*exp(point(0,ang)))
#define rotateA(p,ang,about)  (rotateO(vec(about,p),ang)+about)
#define reflectO(v,m)  (conj((v)/(m))*(m))

//             "وَأَن لَّيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَى ﴿39﴾ وَأَنَّ سَعْيَهُ سَوْفَ يُرَى ﴿40﴾ ثُمَّ يُجْزَاهُ الْجَزَاء الْأَوْفَى "

//                                  My way to My dream


void i_am_very_fast(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
/*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif*/
ll fact (ll f)
{
    if (f == 1 || f==0 )
        return 1 ;

    return f * fact( f-1 ) ;
}

ll lcm (ll a , ll b ) {
    return (a * b) / (__gcd(a, b));
}
ll combination(int n, int r) {

    ll  result = 1;

    for (int i = 0; i < r; i++) {

        result *= (n - i);
        result /= (i + 1);
    }

    return result;
}
/*void srt (ll idx , ve &vv){
    ve vvv ;
    ll b = vv[0] ;
    for (int i = 1; i <vv.size() ; ++i) {
        if (vv[i] >= b)
            vvv.push_back(b);
        if (i==idx)
            continue;
        vvv.push_back(vv[i]);
    }
vv = vvv ;
}*/
bool bs(ll tst , ve &vv){
    ll l = 0 , r = vv.size()-1  , ans = -1;
    while (l <= r)
    {
        ll  med = (l+r)/2;
        if (vv[med] > tst)
            r = med-1 ;
        else {
            ans = med;
            l = med + 1;
        }
    }
    if (ans >= 0) {
        vv[0] += tst;
        if(vv.size()==1) {
            return true;
        }
        vv.erase(vv.begin() + ans);
        sort(all(vv));
        return true;
    }
    else
        return false ;
}
int main() {
    long long n , t ;
     cin >> n >> t ;
     long long cpy = t , cnt = 0;
    while (cpy > 0) {
        cnt++;
        cpy /= 10;
    }
    if (n<cnt)
        cout << -1 ;
else {
    if (t<10) {
        while (n--) {
            cout << t;
        }
    }
else {
        while (n-- > 1) {
            cout << 1;
        }
        cout << 0;
    }
}

}
