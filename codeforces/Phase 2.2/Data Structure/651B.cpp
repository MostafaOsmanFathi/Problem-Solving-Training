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
int* uniqueCustom(int* start,int* end){
    set<int>st;
    queue<int>res,remain;
    for (auto i=start;i!=end;++i){
        if (st.count(*i)){
            remain.push(*i);
        }else
            res.push(*i),st.insert(*i);
    }
    int *ansPointer=start+res.size();
    int tmp1=res.size();
    for (auto i=start;i!=end;++i){
        if (tmp1){
            *i=res.front();res.pop();
            --tmp1;
        }else{
            *i=remain.front();remain.pop();
        }
    }
    return ansPointer;
}
void makeItUnique(int start,const int& End,int arr[]){
    if (start==End)return;
    int tmp= uniqueCustom(arr+start,arr+End)-arr;
    makeItUnique(tmp,End,arr);
}
void solve(){
///==================================================
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i <n ; ++i) {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    makeItUnique(0,n,arr);
    int ans{0};
    for (int i = 1; i <n ; ++i) {
        if (arr[i]>arr[i-1])++ans;
    }
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()
//    int arr[]{100,100,200,200};
//    auto x=uniqueCustom(arr,arr+4)-arr;
//    cout<<"";
//    return 0;
//    tloop
    solve();

    return 0;
}