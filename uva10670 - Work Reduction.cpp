
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



int main()
{



    ll t,i,j,cas=0;
    //scanf("%lld",&t);
    cin>>t;

    while(t--)
    {
        ll n,m,l;
        //scanf("%lld %lld %lld",&n,&m,&l);
        cin>>n>>m>>l;

        vector< pair<ll,string> > v;

        while(l--)
        {

        string s;ll a,b;
        cin>>s;
       /// cout<<s<<endl;
         string name="";

         i=0;

         while(s[i]!=':')
         {
             name+=s[i];i++;
         }

         ///cout<<name<<endl;

         i++;
         char s2[20];j=0;

         while(s[i]!=',')
         {
             s2[j]=s[i];i++;j++;
         }
         s2[j]='\0';

         i++;
         char s3[20];ll j2=0;
         while(i!=s.size())
         {
             s3[j2]=s[i];i++;j2++;
         }
         s3[j2]='\0';

         ///cout<<name<<" "<<s2<<" "<<s3<<endl;

         a=atoi(s2);

         b=atoi(s3);

         ///cout<<a<<" "<<b<<endl;

         ll ans=0,tempn=n;

         while(tempn/2>=m)
         {
             ll d=tempn/2;

             ll r=tempn-d;

             ll c1=a*r;
             ll c2=b;

             ///cout<<c1<<" "<<c2<<endl;

             ans+=min(c1,c2);

             tempn/=2;
         }

         ll rem=tempn-m;

         if(rem>=1)
         {
             ans+=(rem*a);

             v.push_back({ans,name});

         }



        }

        sort(v.begin(),v.end());

       /// printf ("Case %lld\n",++cas);
       cout<<"Case "<<++cas<<endl;

        for(auto x:v) cout<<x.ss<<" "<<x.ff<<endl;






    }

    return 0;

}

/*

2
100 5 3
A:1,10
B:2,5
C:3,1
1123 1122 5
B:50,300
A:1,1000
C:10,10
D:1,50
E:0,0


*/



