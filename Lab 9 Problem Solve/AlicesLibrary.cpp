#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;

	stack<char> st;

	for(int i = 0; i< s.size(); i++) {
		if(s[i] == '\\' || (s[i] == '/' )) continue;
		else st.push(s[i]);
	}

	while(!st.empty()) {
		cout<<st.top();
		st.pop();
	}
}