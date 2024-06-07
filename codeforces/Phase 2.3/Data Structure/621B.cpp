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
bool validPoss(int x,int y){
    return x<1000 and  y<1000 and x>=0 and y>=0;
}
bool arr[1000][1000];

void solve(){
///==================================================
    tloop{
        int a,b;cin>>a>>b;--a,--b;
        arr[a][b]=true;
    }
    int ans{0};
    for (int i = 0; i <1000 ; ++i) {
        int tmp{0};
        int x{0},y{i};
        while (validPoss(x,y)){
            tmp+=arr[x][y];
            ++x,++y;
        }
        ans+=tmp*(tmp-1)/2;
        x=0,y=i,tmp=0;
        while (validPoss(x,y)){
            tmp+=arr[x][y];
            ++x,--y;
        }
        ans+=tmp*(tmp-1)/2;
    }
    for (int i = 1; i <1000 ; ++i) {
        int tmp{0};
        int x{i},y{0};
        while (validPoss(x,y)){
            tmp+=arr[x][y];
            ++x,++y;
        }
        ans+=tmp*(tmp-1)/2;
        x=i,y=999,tmp=0;
        while (validPoss(x,y)){
            tmp+=arr[x][y];
            ++x,--y;
        }
        ans+=tmp*(tmp-1)/2;
    }

    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}