#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	stack<char> st;

	cin >> s;

	int result = 0, value = 1;

	for(int i=0;i<s.length();i++) {
		if(s[i] == '(') {
			st.push(s[i]);
			value *= 2;
		} else if(s[i] == '[') {
			st.push(s[i]);
			value *= 3;
		} else if (s[i] == ')') {
			if(st.empty() || st.top() != '(') {
				result = 0;
				break;
			} else if(st.top() == '(') {
				result += value;
			}
			st.pop();
			value /= 2;
		} else if(s[i] == ']') {
			if(st.empty() || st.top() != '[') {
				result = 0;
				break;
			} else if(st.top() == '[') {
				result += value;
			}
			st.pop();
			value /= 3;
		}
	}

	if(!st.empty()) {
		cout << 0;
	} else {
		cout << result;
	}


	return 0;
}