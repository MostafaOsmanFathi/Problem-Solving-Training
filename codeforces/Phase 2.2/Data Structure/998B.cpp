#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(x,y) ((x/__gcd(x,y))*y)
#define int long long
using namespace std;
const int N=1e3;
int n,m;
int arr[N];
int arr2[N];
int dp[200][200][200];

int rec(int i,int start,int rem){
    if (i>=n-1 or rem<0){return 0;}
    if (~dp[i][start][rem])return dp[i][start][rem];
    int tmp0=count(arr+start,arr+i+1,0);
    int tmp1=count(arr+start,arr+i+1,1);
    int tmp{0};
    if (tmp0==tmp1 and (rem-abs(arr2[i+1]-arr2[i])>=0)) {
        tmp = rec(i + 2, i + 1, rem - abs(arr2[i+1] - arr2[i])) + 1;
    }
    tmp= max(rec(i+1,start,rem),tmp);
    return dp[i][start][rem]=tmp;
}

void solve(){
///==================================================
    cin>>n>>m;
    for (int i = 0; i < n;++i) {
        cin>>arr2[i];
        arr[i]=arr2[i]%2;
    }
    cout<<rec(1,0,m);

///==================================================
}
signed main() {MOSTAFAOSMAN()
    memset(dp,-1,sizeof dp);
//    tloop
    solve();

    return 0;
}