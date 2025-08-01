#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,num=0,i=1;
		cin>>n;
		int k=n;
		while(k){
			if(k%10!=0) num++;
			k/=10;}
		cout<<num<<endl;
		while(n){
			if(n%10!=0) cout<<n%10*i<<" ";
			n/=10,i*=10;}cout<<endl;
	    }
    }
