#include<bits/stdc++.h>

using namespace std;
const long long  n = 1e6;
vector<long long > primeNumber(n,false);
vector<long long  > prime;
vector<long long  > ::iterator it;

void MagicPrime()
{
    int y[10]={0};
    y[2]=1;y[3]=1;y[5]=1;y[7]=1;
    for(int i=1;i<=100000;i++){
        int ck=i;
        while(ck){
            if(y[ck%10]){prime.push_back(i);primeNumber[i]=1;break;}
            ck/=10;
        }
    }
}
int main()
{
    MagicPrime();
    string s;
    int n,m,a,b,x,y;
    cin>>b;
    while(b--){
        cin>>a;
        it=lower_bound(prime.begin(),prime.end(),a);
        m=it-(prime.begin());
        if(primeNumber[a]) m++;
        cout<<m<<endl;
    }
    return 0;
}

