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
bitset<10000010> bs;
vector<int>Primes;
void sieve(int LIM=1e5+100){
    bs[0]=bs[1]=true;
    for (int i = 2; i <=LIM ; ++i) {
        if (!bs[i])
            Primes.push_back(i);
        for (int j = i*i; j <=LIM ; j+=i) {bs[j]=true;}

    }
}
void solve(){
///==================================================
    int n,m;cin>>n>>m;
    int arr[n][m];
    int ans{INT_MAX};
    for (int i = 0; i < n; ++i) {
        int rowSum{0};
        for (int j = 0; j < m; ++j) {
            int tmp;cin>>tmp;
            arr[i][j]=(*std::lower_bound(Primes.begin(), Primes.end(),tmp)-tmp);
            rowSum+=arr[i][j];
        }
        ans= min(ans,rowSum);
    }

    for (int i = 0; i < m; ++i) {
        int ColSum{0};
        for (int j = 0; j < n; ++j) {
            ColSum+=arr[j][i];
        }
        ans= min(ans,ColSum);
    }
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()
    sieve();
//    tloop
    solve();

    return 0;
}