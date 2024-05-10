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
    int n;cin>>n;
    map<int,int>mp;
    int arr[n];
    for (int i = 0; i <n ; ++i) {
        cin>>arr[i];
        ++mp[arr[i]];
    }
    queue<int>q;
    for (int i = 1; i <=n ; ++i) {
        if (!mp.count(i))q.push(i);
    }

    for (int i = 0; i < n; ++i) {
        if (arr[i]<=n and mp[arr[i]]==1){
            cout<<arr[i]<<" ";
        }else{
            cout<<q.front()<<" ";q.pop();
        }
        --mp[arr[i]];
    }


///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}