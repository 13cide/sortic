#ifndef SORTIC_SORTIC_H
#define SORTIC_SORTIC_H

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <windows.h>
using namespace std;

int string_to_int(string str);
int pow(int n, int i);
int itc_len(string str);
bool is_sorted(vector<int> &v);
void print(vector<int> &a, vector<int> &b);
int maxl(vector<int> &a);
int maxi(vector<int> &a, int m);

void initialize_a(vector<int> &a);
vector<string> solve(vector<int> &a, vector<int> &b);

void p(vector <int> &v_to, vector <int> &v_from);
void r(vector <int> &v);
void rr(vector <int> &v);
void s(vector<int> &v);

#endif //SORTIC_SORTIC_H
