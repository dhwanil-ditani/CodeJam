#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int T, depth;
    vector<int> digit;
    string digits, result = "";
    cin >> T; 

    for (int t=0; t < T; t++) {
        result = "";
        depth = 0;
        cin >> digits;
        digit.resize(digits.length());

        for (int i=0; i < digits.size(); i++) {
            digit[i] = (int)(digits[i] - '0');
        }
        
        for (int i=0; i < digit.size(); i++) {
            if (depth == digit[i]) {
                result = result + digits[i];
            }
            else if (depth < digit[i]) {
                for (int j=0; j < digit[i] - depth; j++) {
                    result = result + '(';
                }
                result = result + digits[i];
                depth = digit[i];
            }
            else {
                for (int j=0; j < depth - digit[i]; j++) {
                    result = result + ')';
                }
                result = result + digits[i];
                depth = digit[i];
            }
        }
        for (int i=0; i < depth - 0; i++) {
            result = result + ')';
        }
        cout << "Case #" << t+1 << ": " << result << endl;
    }
    return 0;
}
