#include <bits/stdc++.h>

using namespace std;

#define ERROR string("ERROR")

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input="";
	cin >> input;

	while(input != "QUIT") {
	
		vector<long long> nums;
		vector<string> cmd;

		while(input != "END") {
			if(input == "NUM") {
				long long a;
				cin >> a;
				nums.push_back(a);
			}
			cmd.push_back(input);
			cin >> input;
		}
		int n;
		cin >> n;
		for(int j=0;j<n;j++) {

			stack<long long> st;
			long long a;
			cin >> a;
			st.push(a);

			int num = 0;

			try {
				for(int i=0;i<cmd.size();i++) {

					if(cmd[i] == "NUM") {
						if(abs(nums[num]) > 1e9) throw ERROR;
						st.push(nums[num]);
						num++;
					} else if(cmd[i] == "POP") {
						if(st.empty()) throw ERROR;
						st.pop();
					} else if(cmd[i] == "INV") {
						if(st.empty()) throw ERROR;
						long long a = st.top();
						st.pop();

						st.push(a*(-1));
					} else if(cmd[i] == "DUP") {
						if(st.empty()) throw ERROR;
						st.push(st.top());
					} else if(cmd[i] == "SWP") {
						if(st.size() < 2) throw ERROR;
						long long a = st.top();
						st.pop();
						long long b = st.top();
						st.pop();

						st.push(a);
						st.push(b);
					} else if(cmd[i] == "ADD") {
						if(st.size() < 2) throw ERROR;
						long long a = st.top();
						st.pop();
						long long b = st.top();
						st.pop();

						if(abs(a+b) > 1e9) throw ERROR;

						st.push(a+b);
					} else if(cmd[i] == "SUB") {
						if(st.size() < 2) throw ERROR;
						long long a = st.top();
						st.pop();
						long long b = st.top();
						st.pop();

						if(abs(b-a) > 1e9) throw ERROR;

						st.push(b-a);
					} else if(cmd[i] == "MUL") {
						if(st.size() < 2) throw ERROR;
						long long a = st.top();
						st.pop();
						long long b = st.top();
						st.pop();

						if(abs(a*b) > 1e9) throw ERROR;
						st.push(a*b);
					} else if(cmd[i] == "DIV") {
						if(st.size() < 2) throw ERROR;
						long long a = st.top();
						st.pop();
						long long b = st.top();
						st.pop();

						if(a == 0 || abs(b/a) > 1e9) throw ERROR;
							
						st.push(b/a);
					} else if(cmd[i] == "MOD") {
						if(st.size() < 2) throw ERROR;
						long long a = st.top();
						st.pop();
						long long b = st.top();
						st.pop();

						if(a == 0 || abs(b%a) > 1e9) throw ERROR;

						st.push(b%a);

					}

				}

				if(st.size() != 1) {
					throw ERROR;
				} else {
					cout << st.top() << '\n';
				}
			} catch(string e) {
				cout << e << '\n';
			}
			
		}
		cout << '\n';
		cin >> input;
	}

	return 0;
}