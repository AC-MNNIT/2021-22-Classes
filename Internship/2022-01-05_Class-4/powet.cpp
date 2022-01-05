#include<bits/stdc++.h>
#define lli long long int
#define ll long long
#define F first 
#define S second
#define pb push_back
using namespace std;
ll pwr(ll a,ll b,ll c){
	if(b==0)return 1;
	if(b%2==0){
		ll temp=pwr(a,b/2,c);
		return (temp%c*temp%c)%c;
	}
	else{
		ll temp=pwr(a,b/2,c);
		return (a%c*temp%c*temp%c)%c;
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif


	return 0;
}