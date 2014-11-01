#include <cstring>
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

const int X = 1000005;
typedef long long ll;
ll sum[X],a[X];
ll n;
ll Abs(ll x){
    return max(x,-x);
}
int main(){
    //freopen("sum.in","r",stdin);
	ll n,x,tot=0;
	int i;
    cin>>n;
        for(i=1;i<=n;i++){
            scanf("%lld",&a[i]);
            tot += a[i];
        }
        ll ave = tot/n;
        for(i=1;i<n;i++)
            sum[i] = a[i]+sum[i-1]-ave;
        sort(sum+1,sum+n);
        ll mid = sum[n/2];
        ll ans = Abs(mid);
        for(i=1;i<n;i++)
            ans += Abs(sum[i]-mid);
        cout<<ans<<endl;
    return 0;
}
