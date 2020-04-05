#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, b;
	cin >> t;
	cin >> b;
	while (t--) {
		char c;
		string ans = "";
		for(int j = 0;j < b;j++) {
			ans += "0";
		}
		for(int i = 1;i <= b;i++) {
			cout << i << endl;
			cout.flush();
			cin >> c;
			ans[i-1] = c;
		}
		cout << ans << endl;
		cout.flush();
		char f;
		cin >> f;
		if(f == 'Y') {
		    continue;
		}
		else { 
		    return 0;
		}
	}
	return 0;
}

