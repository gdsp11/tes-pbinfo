//pbinfo - #88 - 100pct

#include <fstream>
#include <cstring>

std::ifstream fin ("palindrom.in");
std::ofstream fout ("palindrom.out");

bool is_pal(char str[]) {
    unsigned int i = strlen(str) - 1;
    unsigned int j = 0;

    while (i >= 0 && j < strlen(str)) {
        if (str[i] != str[j]) {
            return 0;
        }
        i--;
        j++;
    }

    return 1;
}

char str[21];

int main() {
    unsigned short n = 0;
    fin >> n;

    fin.get();
    for (unsigned int i = 0; i < n; i++) {
        fin.getline(str, 21);
        
        fout << is_pal(str) << '\n';
    }

    return 0;
}