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
    int v1,v2,t,d;cin>>v1>>v2>>t>>d;
    vector<int>maxSpeed(t,d);
    maxSpeed.back()=v2;
    partial_sum(maxSpeed.rbegin(), maxSpeed.rend(),maxSpeed.rbegin());
    int ans{v1+v2};
    int CurSpeed=v1;
    for (int i = 1; i <t-1; ++i) {
        if (CurSpeed>maxSpeed.at(i)){
            int tmp=abs(maxSpeed.at(i)-CurSpeed);
            CurSpeed-= min(tmp,d);
        }else if (CurSpeed<maxSpeed.at(i)){
            int tmp=abs(maxSpeed.at(i)-CurSpeed);
            CurSpeed+= min(tmp,d);
        }
        ans+=CurSpeed;
    }
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}