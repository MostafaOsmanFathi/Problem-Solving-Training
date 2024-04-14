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
int n,l,r,x;
const int N=100;
int arr[N];
int rec(int i,int sum,int mn,int mx){

    if (i== n){
        return !(sum==0||sum<l||sum>r||mx-mn<x);
    }

    return rec(i+1,sum+arr[i], min(mn,arr[i]), max(mx,arr[i]))+
           rec(i+1,sum, mn,mx);
}

void solve(){
///==================================================
    cin>>n>>l>>r>>x;
    for (int i = 0; i <n ; ++i) {
        cin>>arr[i];
    }
    cout<<rec(0,0,INT_MAX,INT_MIN);

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}