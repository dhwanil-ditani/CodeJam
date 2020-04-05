#include <bits/stdc++.h>

using namespace std;

int trace(vector<vector<int>> matrix) {
    int result = 0;
    for (int i=0; i < matrix.size(); i++) {
        for (int j=0; j < matrix.size(); j++) {
            if (i == j) {
                result = result + matrix[i][j];
            }
        }
    }
    return result;
}

bool hasRepetingElements(vector<int> arr) {

    vector<int> nums(arr.size(), 0);
    for (int i=0; i < arr.size(); i++) {
        nums[arr[i]-1] += 1;
    }

    for (int i=0; i < nums.size(); i++) {
        if (nums[i] > 1) {
            return true;
        }
    }
    return false;
}


int noofRows(vector<vector<int>> matrix) {
    int result = 0;
    for (int i=0; i < matrix.size(); i++) {
        if (hasRepetingElements(matrix[i])) {
            result += 1;
        }
    }
    return result;
}

int noofCols(vector<vector<int>> matrix) {
    int n = matrix.size();
    vector<vector<int>> transpose (n, vector<int>(n));
    for (int i=0; i < matrix.size(); i++) {
        for (int j=0; j < matrix.size(); j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    return noofRows(transpose);
}

int main(int argc, char const *argv[])
{
    int T, n;
    vector<vector<int>> matrix;
    cin >> T;

    for(int a=0; a < T; a++) {

        cin >> n;
        matrix = vector<vector<int>> (n, vector<int>(n));
        for (int i=0; i < n; i++) {
            for (int j=0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }
        cout << "Case #" << a+1 << ": " << trace(matrix) << " " << noofRows(matrix) << " " << noofCols(matrix) << endl;
    }
    return 0;
}
