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


}

int main()
{
    optimize();

    string s1,s2,s3;


    char cc1;
    cin>>cc1;
    getline(cin,s1);
    s1 = cc1+s1;


    char cc2;
    cin>>cc2;
    getline(cin,s2);
    s2 = cc2+s2;

    char cc3;
    cin>>cc3;
    getline(cin,s3);
    s3 = cc3+s3;

//
//    cout<<s1<<endl;
//    cout<<s2<<endl;
//    cout<<s3<<endl;


    int c1=0,c2=0,c3=0;

    for(int i=0; i<s1.length(); i++){

        if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u'){
            c1++;
        }
    }

    for(int i=0; i<s2.length(); i++){

        if(s2[i]=='a' || s2[i]=='e' || s2[i]=='i' || s2[i]=='o' || s2[i]=='u'){
            c2++;
        }

    }

    for(int i=0; i<s3.length(); i++){

        if(s3[i]=='a' || s3[i]=='e' || s3[i]=='i' || s3[i]=='o' || s3[i]=='u'){
            c3++;
        }
    }

//
//    cout<<c1<<" "<<c2<< " "<<c3<<endl;
    if(c1==5 && c2==7 && c3==5){
        YES
    }
    else NO

    return 0;
}




