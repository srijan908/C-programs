#include<bits/stdc++.h>
using namespace std;
#define fo(i,k,n) for(long long i=k;i<n;i++)
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second

typedef long long ll;

/* ll fun_ceil(ll n,ll k){
if(n%k==0){
    return n/k;
}
else {
    ll x = (n/k)+1;
    return x;
}
} */
//sort(s.begin(),s.end(),[](tt x, tt y){return abs(x)>abs(y);});

ll gcd(ll a, ll b)
{
    /* GCD(0, b) == b; GCD(a, 0) == a,
       GCD(0, 0) == 0 */
    if (a == 0)
        return b;
    if (b == 0)
        return a;
 
    /*Finding K, where K is the
      greatest power of 2
      that divides both a and b. */
    ll k;
    for (k = 0; ((a | b) & 1) == 0; ++k) 
    {
        a >>= 1;
        b >>= 1;
    }
 
    /* Dividing a by 2 until a becomes odd */
    while ((a & 1) == 0)
        a >>= 1;
 
    /* From here on, 'a' is always odd. */
    do
    {
        /* If b is even, remove all factor of 2 in b */
        while ((b & 1) == 0)
            b >>= 1;
 
        /* Now a and b are both odd.
           Swap if necessary so a <= b,
           then set b = b - a (which is even).*/
        if (a > b)
            swap(a, b); // Swap u and v.
 
        b = (b - a);
    }while (b != 0);
 
    /* restore common factors of 2 */
    return a << k;
}

ll findGCD(vector<ll>arr,int n){
    ll result = arr[0]; 
    for (int i = 1; i < n; i++) 
    { 
        result = gcd(arr[i], result); 
  
        if(result == 1) 
        { 
           return 1; 
        } 
    } 
    return result; 
}

void calc(){
    int n;cin>>n;
    if(n==1)
        cout<<4;
    else if(n%2==0){
        ll ans = pow(n/2+1,2);
        cout<<ans;
    }
    else{
        int k = floor(n/2);
        ll ans = 2*(k+1)*(k+2);
        cout<<ans;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
        calc();
    
    return 0;
}