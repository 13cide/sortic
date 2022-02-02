#include "sortic.h"

int itc_len(string str) {
    int a = 0;
    while (str[a] != '\0') a++;
    return a;
}

int string_to_int(string str){
    int ste = int(itc_len(str));
    int ans = 0;
    for (int i = 0; i < itc_len(str); i++) {
        ans += (str[i] - 48) * pow(10, ste - 1);
        ste--;
    }
    return ans;
}

int pow(int n, int i) {
    if (i == 0) return 1;
    else return n * pow(n, i - 1);
}

bool is_sorted(vector<int> &v) { // проверка на отсортированность
    if (v.size() > 1) {
        for (int i = 0; i < v.size() - 1; i++) if (v[i + 1] < v[i]) return false;
    }
    return true;
}

void print(vector<int> &a, vector<int> &b) {
    cout << "    a                            b" << endl << "--------                     --------" << endl;
    int i = 0;
    while (i < a.size() && i < b.size()) {
        cout << a[i] << "                            " << b[i]  << endl;
        i++;
    }
    if (a.size() > b.size()) while (i < a.size()) {
        cout << a[i] << endl;
        i++;
    }
    if (a.size() < b.size()) while (i < b.size()) {
        cout << "                             " << b[i] << endl;
        i++;
    }
}