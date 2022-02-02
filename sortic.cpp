#include "sortic.h"

void initialize_a(vector<int> &a, string nums) { // заполнение массива
    string n = "";
    for (int i = 0; nums[i] != '\0'; i++) {
        if (nums[i] != ' ') {
            n += nums[i];
        }
        else {
            a.push_back(string_to_int(n));
            n = "";
        }
    }
    a.push_back(string_to_int(n));
}

void solve(vector<int> &a, vector<int> &b, vector<string> &com) {
    int n = a.size();
    for (int i = 0; i < n; i++) {
        com.push_back("pb");
        p(b, a);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
        cout << endl << "pb:" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
        print(a, b);
    }

    while (!b.empty()) {
        int m = maxl(b);
        if (maxi(b, maxl(b)) <= b.size() / 2) {
            while (b[0] != m) {
                com.push_back("rb");
                r(b);
                cout << endl << "rb:" << endl;
                print(a, b);
            }
            cout << endl << "pa:" << endl;
            p(a, b);
            com.push_back("pa");
            print(a, b);
        }
        else if (maxl(b) > b.size() / 2) {
            while (b[0] != m) {
                cout << endl << "rrb:" << endl;
                com.push_back("rrb");
                rr(b);
                print(a, b);
            }
            cout << endl << "pa:" << endl;
            com.push_back("pa");
            p(a, b);
            print(a, b);
        }
    }
}

int main(int argc, char *argv[]) {
    vector<int> a;
    vector<int> b;
    string nums;
    vector<string> com;
    ifstream input_nums;
    input_nums.open(R"(C:\Users\aleks\CLionProjects\check\input_nums.txt)");
    getline(input_nums, nums);
    if (argc == 1) initialize_a(a, nums);
    else initialize_a(a, argv[1]);
    if (!is_sorted(a)) solve(a, b, com);
    ofstream output;
    output.open(R"(C:\Users\aleks\CLionProjects\check\input_commands.txt)"); // вывод
    for (int i = 0; i < com.size(); i++) output << com[i] << " ";
    return 0;
}
