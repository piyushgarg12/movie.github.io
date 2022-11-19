#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
		 string str;
		 cin>>str;
		 string ans= "Yes";
		 int index;
		 if(str[0]=='Y') index=0;
		 else if(str[0]=='e') index=1;
		 else index=2;
		 bool flag =true;
		 for(int i=1;i<str.size();i++ ){
		 	 if(str[i]!= ans[index++%3]){
		 	 	 flag=false;
		 	 	 break;
		 	 }
		 } 
		 if(flag) cout<<"YES"<<endl;
		 else cout<<"NO"<<endl;
	}
	return 0;
}
