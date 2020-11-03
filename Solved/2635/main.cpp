//pbinfo - #2635

#include <fstream>
#include <cstring>

std::ifstream fin ("capslock.in");
std::ofstream fout ("capslock.out");

char str[256];

int main() {
    fin.get(str, 256);

    bool caps = false;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            fout << ' ';
            i++;
        }

        if (str[i] == '#') {
            caps = !caps;
            i++;
        }

        if (caps)
            fout << (char)((int)str[i] - 32);
        else
            fout << str[i];
    }

    return 0;
}