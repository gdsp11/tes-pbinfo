//pbinfo - #2346 - 100pct

#include <fstream>
#include <cstring>

std::ifstream fin ("paritatesiruri.in");
std::ofstream fout ("paritatesiruri.out");

void print_even(char str[]) {
    for (unsigned int i = 0; i < strlen(str); i += 2) {
        fout << str[i];
    }
}

void print_odd(char str[]) {
    for (unsigned int i = 1; i < strlen(str); i += 2) {
        fout << str[i];
    }
}

char str[10001];
unsigned short n = 0;

int main() {
    fin >> n;

    fin.get();
    for (unsigned short i = 0; i < n; i++) {
        fin.getline(str, 10001);

        print_odd(str);
        fout << ' ';
        print_even(str);
        fout << '\n';
    }

    return 0;
}