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
    int arr2[n][m];
    int arr[n][m];
    mSet(arr,0);
    int mx{INT_MIN};
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <m ; ++j) {
            cin>>arr2[i][j];
        }
    }

    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j < m; ++j) {
            bool tmp = arr2[i][j];
//            cin>>tmp;
            if (tmp) {
                for (int k = 0; k < n; ++k) {
                    ++arr[k][j];
                    mx = max(arr[k][j], mx);
//                    if (!arr2[k][j]) {
//                        outCondtion(false)
//                        return;
//                    }
                }
                for (int k = 0; k < m; ++k) {
                    ++arr[i][k];
                    mx = max(arr[i][k], mx);
//                    if (!arr2[i][k]) {
//                        outCondtion(false)
//                        return;
//
//                    }
                    mx = max(arr[i][j], mx);
                }
            }
        }
    }

    bool arrAns[n][m],arrCmp[n][m];
    mSet(arrCmp,0);
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <m ; ++j) {
            if (arr[i][j]==mx){
                arrAns[i][j]= true;
                arrCmp[i][j]= true;
                for (int k = 0; k < n; ++k) {
                    if (!arr2[k][j]) {
                        outCondtion(false)
                        return;
                    }
                    arrCmp[k][j]= true;
                }
                for (int k = 0; k < m; ++k) {
                    if (!arr2[i][k]) {
                        outCondtion(false)
                        return;
                    }
                    arrCmp[i][k]= true;
                }
            }else
                arrAns[i][j]= false;
        }
    }
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <m ; ++j) {
            if (arr2[i][j]!=arrCmp[i][j]){
                outCondtion(false);
                return;
            }
        }
    }
    outCondtion(true)
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout<<arrAns[i][j]<<" ";
        }
        cout<<endl;
    }
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}