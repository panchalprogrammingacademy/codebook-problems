// imports
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int randInt(int a, int b) {
    return rand() % (b - a + 1) + a;
}

vector<int> io() {
    int a = randInt(1000, 9999);
    return {a};
}

string foo(const vector<int>& v) {
    int num = v[0];
    if (num % 400 == 0) return "TRUE";
    if (num % 4 == 0 && num % 100 != 0) return "TRUE";
    else if (num % 4 == 0 && num % 100 == 0) return "FALSE";
    else return "FALSE";
}

// join a string with a separator
string join(const vector<int>& v, string sep) {
    string s = "";
    for (int i = 0; i < v.size(); i++) {
        s += to_string(v[i]);
        if (i != v.size() - 1) {
            s += sep;
        }
    }
    return s;
}

int main() {
    srand(time(NULL));
    for (int i = 0; i < 98; i++) {
        auto v = io();
        cout << "{"
            << "\"input\": \""<< join(v, " ") << "\","
            << "\"output\": \""<< foo(v) << "\", "
            << "\"score\": 2,"
            << "\"timeout\": 1000, "
            << "\"locked\": true"
            << "},\n";
    }

    return 0;
}
