///   ***   ---            In the name of ALLAH           ---   ***   ///
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define YES printf("YES\n");
#define NO printf("NO\n");

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define fin(a,n) for(int i=0; i<n; i++){cin>>a[i];}

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}

ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }

const int mx = 2e5+123;
int a[mx];
ll sum[mx];

void solve(){

    int n;
    cin>>n;

    n*=2;
    vi a(n);
    fin(a,n);


//    if(n==2){
//
//        if(a[0]==0 && a[1]==0){
//            cout<<0<<" "<<0<<endl;
//        }
//        else if(a[0]==0 && a[1]==1){
//            cout<<1<<" "<<1<<endl;
//        }
//        else if(a[0]==1 && a[1]==1){
//            cout<<0<<" "<<0<<endl;
//        }
//        else if(a[0]==1 && a[1]==0){
//            cout<<1<<" "<<1<<endl;
//        }
//        return;
//
//    }

    int cnt=0;

    for(int i=0; i<n; i++){
        if(a[i]==1)cnt++;
    }


    int mx = (cnt<=n/2?cnt:n-cnt);
    int mn = cnt%2;

    cout<<mn<<" "<<mx<<endl;
}

int main()
{
    optimize();

    int t; cin>>t; while(t--)solve();

    return 0;
}




