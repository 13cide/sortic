#include "sortic.h"

int maxl(vector<int> &a) {
    int max = -99999;
    for (int i = 0; i < a.size(); i++) if (a[i] > max) max = a[i];
    return max;
}

int maxi(vector<int> &a, int m) {
    for (int i = 0; i < a.size(); i++) if (a[i] == m) return i;
}