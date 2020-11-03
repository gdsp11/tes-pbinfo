//pbinfo - #90 - 100pct

#include <fstream>
#include <cstring>

std::ifstream fin ("vocmax.in");
std::ofstream fout ("vocmax.out");

char str[251];

int vocal_counter(char str[]) {
    char vocals[] = "aeiou";
    unsigned int count = 0;

    for (unsigned short i = 0; i < strlen(str); i++) {
        if (strchr(vocals, str[i])) {
            count++;
        }
    }

    return count;
}

int main() {
    unsigned short n;
    unsigned int max_vocals = 0;
    char max_str[251];

    fin >> n;

    fin.get();
    for (unsigned short i = 0; i < n; i++) {
        fin.getline(str, 251);

        if (vocal_counter(str) > max_vocals) {
            max_vocals = vocal_counter(str);
            strcpy(max_str, str);
        }
    }

    fout << max_str;

    return 0;
}