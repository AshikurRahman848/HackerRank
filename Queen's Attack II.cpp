#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the queensAttack function below.
int queensAttack(int n, int k, int r_q, int c_q, vector<vector<int>> obstacles) {
    vector<int> r = {c_q - 1, min(c_q - 1, n - r_q), n - r_q,
                     min(n - r_q, n - c_q), n - c_q, min(r_q - 1, n - c_q),
                     r_q - 1, min(r_q - 1, c_q - 1) };

    for( int i = 0; i < obstacles.size(); i++ ) {
        vector<int> o = obstacles[i];
        if( o[0] == r_q ) {
            if( o[1] < c_q ) {
                r[0] = min(r[0], c_q - o[1] - 1);
            } else {
                r[4] = min(r[4], o[1] - c_q - 1);
            }
        }
        if( o[1] == c_q ) {
            if( o[0] < r_q ) {
                r[6] = min(r[6], r_q - o[0] - 1);
            } else {
                r[2] = min(r[2], o[0] - 1 - r_q);
            }
        }
        if( r_q - o[0] == o[1] - c_q ) {
            if( r_q > o[0] ) {
                r[5] = min(r[5], r_q - o[0] - 1);
            } else {
                r[1] = min(r[1], o[0] - r_q - 1);
            }
        }
        if( o[0] - r_q == o[1] - c_q ) {
            if( r_q > o[0] ) {
                r[7] = min(r[7], r_q - o[0] - 1);
            } else {
                r[3] = min(r[3], o[0] - r_q -1);
            }
        }
    }
    int result = 0;
    for( int i = 0; i < r.size(); i++) {
        result += r[i];
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string r_qC_q_temp;
    getline(cin, r_qC_q_temp);

    vector<string> r_qC_q = split_string(r_qC_q_temp);

    int r_q = stoi(r_qC_q[0]);

    int c_q = stoi(r_qC_q[1]);

    vector<vector<int>> obstacles(k);
    for (int i = 0; i < k; i++) {
        obstacles[i].resize(2);

        for (int j = 0; j < 2; j++) {
            cin >> obstacles[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = queensAttack(n, k, r_q, c_q, obstacles);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

