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
typedef pair<int,int> pa;
bool cmp(pa& a,pa& b){
    if (a.second!=0 and b.second!=0)
        return a.second>b.second;
    else if (a.second)return true;
    else if (b.second)return false;
    else
        return a.first>b.first;
}
void solve(){
///==================================================
    int n;cin>>n;
    pa arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i].first;
        cin>>arr[i].second;
    }
    sort(arr,arr+n,cmp);
    int score{0},cnt{1},con{0};
    while (cnt and con !=n){
        score+=arr[con].first;
        cnt+=arr[con].second-1;
        ++con;
    }
    cout<<score<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}