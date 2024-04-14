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
    priority_queue<int>pq;
    for (int i = 0; i <n ; ++i) {
        int tmp;cin>>tmp;pq.push(tmp);
    }
    int arr[3]{0},mx{0};
    for (int i = 0; i < n; ++i) {
        if (arr[0]<mx)arr[0]+=pq.top(),mx= max(arr[0],mx),pq.pop();
        else if (arr[1]<mx)arr[1]+=pq.top(),mx= max(arr[1],mx),pq.pop();
        else
             arr[2]+=pq.top(),mx= max(arr[2],mx),pq.pop();
    }

    sort(arr,arr+3);
    int ans{0};
    ans+=((arr[2]/2)+arr[2]%2)-arr[0]+1;
    ans+=((arr[2]/2))-arr[1];
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}