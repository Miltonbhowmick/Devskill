#include<bits/stdc++.h>

using namespace std;

bool vo(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        return true;
    return false;
}
int main()
{
    string s;
    int t,n;
    cin>>t;
    for(int p=1;p<=t;p++){
        cin>>n;
        cin>>s;
        int ln=s.length(),j,cnt=0,ans=0;
        for(int i=0;i<ln;i++){
            if(vo(s[i])){
                ans++;
                for(j=i;j<ln;j++)
                    if(!vo(s[j])){
                        break;
                    }
                i=j;
            }
        }
        printf("Case %d: %d\n",p,ans);
    }

    return 0;
}

