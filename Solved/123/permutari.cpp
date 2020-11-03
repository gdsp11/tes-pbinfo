#include <fstream>

using namespace std;

ifstream fin ("permutari.in");
ofstream fout ("permutari.out");

int n, v[9];

void citire()
{
    fin >> n;
}

void scrie()
{
    for(int i=1; i<=n; ++i)
        fout << v[i] << ' ';
    fout << '\n';
}
int verificare(int k)
{
    for(int i=1; i<k; ++i)
        if(v[i] == v[k])
            return 0;
    return 1;
}
void backtracking(int k)
{
    if(k == n+1)
        scrie();
    else
        for(int i=1; i <= n; ++i)
        {
            v[k]=i;
            if (verificare(k) == 1)
                backtracking(k+1);
        }
}
int main()
{
    citire();
    backtracking(1);
    return 0;
}