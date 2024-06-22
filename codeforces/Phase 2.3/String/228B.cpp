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
    int n1,m1;cin>>n1>>m1;
    bool arr1[n1][m1];
    for (int i = 0; i <n1 ; ++i) {
        for (int j = 0; j <m1 ; ++j) {
            char x;cin>>x;
            arr1[i][j]=x-'0';
        }
    }

    int n2,m2;cin>>n2>>m2;
    bool arr2[n2][m2];

    for (int i = 0; i <n2 ; ++i) {
        for (int j = 0; j <m2 ; ++j) {
            char x;cin>>x;
            arr2[i][j]=x-'0';
        }
    }
    int x{0},y{0},ans{0};
    for (int i = -100 ; i <100 ; ++i) {
        for (int j = -100 ; j <100 ; ++j) {
            int res{0};
            for (int k = 0; k <n1 ; ++k) {
                for (int l = 0; l < m1; ++l) {
                    int k2=k+i;
                    int l2=l+j;
                    if (k2>=0 and l2>=0 and k2<n2 and l2<m2 and arr1[k][l]*arr2[k2][l2]==1){
                        ++res;
                    }
                }
            }
            if (res>ans)
                x=i,y=j,ans=res;
        }
    }
    cout<<x<<" "<<y<<endl;

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}