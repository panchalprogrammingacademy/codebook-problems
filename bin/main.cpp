// imports
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;


int randInt(int a, int b) {
    return rand() % (b - a + 1) + a;
}

vector<int> io() {
    vector<int> v;
    for (int i = 0; i < 4; i++) {
        v.push_back(randInt(-100, 100));
    }
    return v;
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

char str[10];
char* foo(vector<int>& v) {
    int x1 = v[0], y1 = v[1];
    int x2 = v[2], y2 = v[3];
    double dist = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    sprintf(str, "%lf", dist);
    return str;
}


int main() {
    srand(time(NULL));
    for (int i = 0; i < 50; i++) {
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
