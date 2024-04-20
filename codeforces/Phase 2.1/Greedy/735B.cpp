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

void solve(){
///==================================================
    int n,n1,n2;cin>>n>>n1>>n2;
    int arr[n];
    priority_queue<int>pq;
    for (int i = 0; i <n ; ++i) {
        int tmp;cin>>tmp;
        pq.push(tmp);
    }
    if (n1>n2)swap(n1,n2);
    ld ans1{0};
    for (int i = 0; i < n1; ++i)
        ans1+=pq.top(),pq.pop();

    ld ans2{0};
    for (int i = 0; i < n2; ++i)
        ans2+=pq.top(),pq.pop();

    ans1/=n1,ans2/=n2;
    cout<<ans1+ans2<<endl;

///==================================================
}
signed main() {MOSTAFAOSMAN()
    cout<<fixed<<setprecision(6);
//    tloop
    solve();

    return 0;
}