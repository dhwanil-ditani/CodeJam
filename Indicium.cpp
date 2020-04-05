#include <bits/stdc++.h>

using namespace std;




vector<vector<int>> buildLatinMatrix(int N, int K, string& result) {
    vector<vector<int>> matrix (N, vector<int>(N, 0));
    for (int i=0; i < N - K%N; i++) {
        for (int j=0; j < N - K%N; j++) {
            if (i == j) {
                matrix[i][i] = K/N; 
            }
        }
    }
    for (int i=0; i < K%N; i++) {
        matrix[N - 1 - i][N - 1 - i] = K/N + 1;
    }

    vector<bool> nodes(N, false);
    for (int i=0; i < N; i++) {
        for (int j=0; j < N; j++) {
            if (matrix[i][j] == 0) {
                
            }
        }
    }


    return matrix;
}

void printMatrix(vector<vector<int>> matrix) {
    for (int i=0; i < matrix.size(); i++) {
        for (int j=0; j < matrix.size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int T, N, K;
    cin >> T;
    for (int t=0; t < T; t++) {
        string result;
        
        cin >> N >> K;
        
        printMatrix(buildLatinMatrix(N, K, result));

        // cout << "Case #" << t+1 << ": " << result << endl;
        // if (result == "POSSIBLE") {
        //     printMatrix();
        // }
    }
    return 0;
}
