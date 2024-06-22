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
    int n,x,y;cin>>n>>x>>y;
    set<pair<int,int>>st;
    while (n--){
        int a,b;cin>>a>>b;
        int tmp1=(b-y);
        int tmp2=(a-x);
        int tmp3= gcd(tmp1,tmp2);
        tmp1/=tmp3;
        tmp2/=tmp3;
        if (tmp1==0){
            tmp1=0;
            tmp2=0;
        }else if (tmp2==0){
            tmp1= abs(tmp1);
        }else if (tmp1<0 and tmp2<0){
            tmp1= abs(tmp1);
            tmp2= abs(tmp2);
        }else if (tmp1<0 or tmp2<0){
            tmp1= -abs(tmp1);
            tmp2= abs(tmp2);
        }
        st.insert({tmp1,tmp2});
    }
//    for (auto x:st) {
//        cout<<x.first<<" "<<x.second<<endl;
//    }
    cout<<st.size();
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}