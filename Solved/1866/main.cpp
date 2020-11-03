//pbinfo - #1866

#include <fstream>
#include <cstring>

std::ifstream fin ("prosir.in");
std::ofstream fout ("prosir.out");

char sir[200];

int main() {
    fin.get(sir, 200);

    if (strlen(sir) > 2) {
        for (unsigned int i = 0; i < strlen(sir); i++) {
            if (sir[i] != ' ' && sir[i] != '.' && (sir[i + 1] == ' ' || sir[i + 1] == '.'))
                sir[i] = '5';
        }

        for (unsigned int i = 0; i < strlen(sir); i++) {
            fout << sir[i];
        }
    }
    else {
        fout << '.';
    }

    return 0;
}