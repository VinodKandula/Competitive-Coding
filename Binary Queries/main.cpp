#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;


int main()
{
	fast;
	int n,q;
	cin>>n>>q;
	int a[n+1];
	for(int i =1;i<=n;i++)
        cin>>a[i];
    for(int i =0;i<q;i++)
    {
        int c;
        cin>>c;
        int l,r;
        if(c==0)
        {
            cin>>l>>r;
            if(a[r]==1)
                cout<<"ODD\n";
            else
                cout<<"EVEN\n";
        }
        else
        {
            cin>>l;
            a[l]=a[l]==1?0:1;
        }

    }

	return 0;

}
