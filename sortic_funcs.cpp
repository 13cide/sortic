#include "sortic.h"

void s(vector<int> &v) { // sa �㤥� ������� � ���� ��� s(a); sb ��� s(b);
    if(v.size() > 2) {
        int tmp = v[0];
        v[0] = v[1];
        v[1] = tmp;
    }
}

void p(vector <int> &v_to, vector <int> &v_from) { // v_to - � ����� ���ᨢ �� ��४��뢠�� ���祭��, v_from - �� ������
    if (!v_from.empty()) {                       // pa �㤥� ������� � ���� ��� p(a, b); pb ��� p(b, a);
        v_to.push_back(v_from[0]);
        rr(v_to);
        r(v_from);
        v_from.pop_back();
    }
}

void r(vector <int> &v) { // ra �㤥� ������� � ���� ��� r(a); rb ��� r(b);
    if (v.size() > 1) {
        int tmp = v[0];
        for (int i = 0; i < v.size() - 1; i++) {
            v[i] = v[i + 1];
        }
        v[v.size() - 1] = tmp;
    }
}

void rr(vector <int> &v) { // rra �㤥� ������� � ���� ��� rr(a); rrb ��� rr(b);
    if (v.size() > 1) {
        int tmp = v[v.size() - 1];
        for (int i = int(v.size()) - 1; i > 0; i--) {
            v[i] = v[i - 1];
        }
        v[0] = tmp;
    }
}