#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(a,b) (((a)/gcd(a,b))*(b))
#define inf 0x3f3f3f3f3f3f3f3fLL
#define mSet(arr,value) memset((arr),(value),(sizeof (arr)))
#define int long long
using namespace std;

void solve(){
///==================================================
    int n;cin>>n;
    int mn{INT_MAX},poss;
    for (int i = 1; i <=n ; ++i) {
        int tmp;cin>>tmp;
        int t1=(ceil(tmp/(double )n)*n)+i;
        int t2=((tmp/n)*n)+i;
        int res=(tmp<i)?i:(((t2>tmp)?t2:t1));
        if (res<mn)mn=res,poss=i;
    }
    cout<<poss<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}