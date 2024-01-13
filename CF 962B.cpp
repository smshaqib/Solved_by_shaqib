///   ***   ---            In the name of ALLAH        |||   ---   ***   ///
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


}



int main()
{
    optimize();

    int n,a,b;
    cin>>n>>a>>b;

    string s;
    cin>>s;

    vi sit;

    int c=0;

    for(int i=0; i<s.length(); i++){

        if(s[i]=='.'){
            c++;
        }

        else{

            if(c!=0)sit.PB(c);

            c=0;
        }
    }

    if(c!=0)sit.PB(c);

    int res = 0;

    for(int i=0; i<sit.size(); i++){


//        cout<<"This is sit : "<<sit[i]<<endl;
        if(sit[i]==1){
            if(max(a,b)==0){
                continue;
            }
            if(a<b){
                b--;
                res++;
            }
            else if(a>=b){
                a--;
                res++;
            }

            continue;
        }

        int x = sit[i]/2;
//
//        cout<<"This is x : "<<x<<endl;

        if(x<=a){
            a-=x;
            res+=x;
        }
        else if(x>a){
            res+=a;
            a=0;
        }


        if(x<=b){
            b-=x;
            res+=x;
        }
        else if(x>b){
            res+=b;
            b=0;
        }


        if(sit[i]%2==1){

            if(max(a,b)==0){
                continue;
            }
            if(a<b){
                b--;
                res++;
            }
            else if(a>=b){
                a--;
                res++;
            }

        }
//
//        cout<<"This is res : "<<res<<endl;
//
//        cout<<a<<" "<<b<<endl;
    }

    cout<<res<<endl;

    return 0;
}

