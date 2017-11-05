#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long t,a,b,ans,cnt,ck;
    cin>>t;
    for(int p=1;p<=t;p++){
        cnt=1,ck;
        scanf("%llu%llu",&a,&b);
        ck=a;
        while(ck<b){
            a*=2;
            ck+=a;
            cnt++;
        }
        printf("Case %d: %llu\n",p,cnt);
    }
    return 0;
}
