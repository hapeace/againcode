#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	stack<int> s;
	int n;
	string ans;
	
	cin>>n;
	
	int m = 0;
	while(n--){
		int x;
		cin>>x;
		if(x>m){
			while(x > m){
				s.push(++m);
				ans+='+';
			}
			s.pop();
			ans += '-';
		} else {
			bool found = false;
			if(!s.empty() ) {
				int top = s.top();
				s.pop();
				ans += '-';
				if(x == top) {
					found = true;
				}
			}
			if(!found) {
				cout<<"NO" <<"\n";
				return 0;
			}
		}
		
	}
	for(int i=0;i<ans.length();i++) {
		cout<< ans[i] << "\n";
	}
	return 0;
}
