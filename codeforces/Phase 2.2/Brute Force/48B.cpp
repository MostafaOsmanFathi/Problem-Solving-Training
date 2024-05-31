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
    int n,m;cin>>n>>m;
    int prefix[n][m];;
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <m ; ++j) {
            cin>>prefix[i][j];
            if (j)
                prefix[i][j]+=prefix[i][j-1];

        }
    }
    for (int i = 1; i <n ; ++i) {
        for (int j = 0; j <m ; ++j) {
            prefix[i][j]+= prefix[i-1][j];
        }
    }
    int a,b;cin>>a>>b;
    --a,--b;
    int ans{INT_MAX};
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <m ; ++j) {
            if (i>=a and j>=b){
                int x1{i-a},y1{j-b},x2{i},y2{j};
                --y1,--x1;

                int t1=prefix[x2][y2];
                int t2=(x1==-1)?0:prefix[x1][y2 ];
                int t3=(y1==-1)?0:prefix[x2][y1];
                int t4=(x1==-1 or y1==-1)?0:prefix[x1][y1];
                int res=t1-t2-t3+t4;
//                cout<<res<<" "<<flush;
                ans=min(ans,res);
            }
            if (i>=b and j>=a ){
                int x1{i-b},y1{j-a},x2{i},y2{j};
                --y1,--x1;

                int t1=prefix[x2][y2];
                int t2=(x1==-1)?0:prefix[x1][y2 ];
                int t3=(y1==-1)?0:prefix[x2][y1];
                int t4=(x1==-1 or y1==-1)?0:prefix[x1][y1];
                int res=t1-t2-t3+t4;
//                cout<<res<<" "<<flush;
                ans=min(ans,res);
            }
        }
    }

    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}