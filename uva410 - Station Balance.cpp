
///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back

#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int mod2=2147483647; ///2^31-1
const int M=500005;

ll a[M];


int main()
{




    ll t,i,j,cas=0;
    ll s,c;

    while(scanf("%lld %lld",&c,&s)!=EOF)
    {
         vector<ll> v;
         ll cnt=0;

         double avg,sum=0.0;

        for(i=0;i<s;i++)
        {
            ll x;scanf("%lld",&x); v.push_back(x);
            sum+=x;
            cnt++;
        }

        avg=sum/c;

     //   cout<<"AVG "<<avg<<endl;

        for(i=cnt;i<2*c;i++) v.push_back(0);

        sort(v.begin(),v.end());

        //for(auto x:v) cout<<x<<" ";
       // cout<<endl;

        vector<pll> ans;

        ll i=0,j=2*c-1;

        double imbalance=0.0;

        while(i<=j)
        {
            double cm=v[i]+v[j];
            ans.push_back({v[i],v[j]});

            imbalance+=fabs(cm-avg);

           // cout<<"IMBAL "<<imbalance<<endl;

            i++; j--;


        }


        printf("Set #%lld\n",++cas);

        ll no=0;
        for(auto it:ans)
        {
           printf(" %lld:",no++);

           if(it.ff!=0) printf(" %lld",it.ff);
           if(it.ss!=0) printf(" %lld",it.ss);

           printf("\n");
        }

        printf("IMBALANCE = %.5f\n\n",imbalance);


       /// cout<<imbalance<<endl;







    }

    return 0;

}
/*

2 3
6 3 8
3 5
51 19 27 14 33
5 9
1 2 3 5 7 11 13 17 19

 */



