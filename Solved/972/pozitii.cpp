#include <iostream>
#include <cstring>
using namespace std;

char voc[]="aeiou",s[255];
int k;
int litera (char ch)
{
 if (ch>='a' and ch<='z') return 1;
 return 0;
}
int main()
{   int i;
    cin.get(s,256);
    for (i=1; i<strlen(s)-1;i++)
        if(litera(s[i-1]) and litera(s[i+1]))
        if (strchr(voc,s[i])!=0 && strchr(voc,s[i-1])==0
            && strchr(voc,s[i+1])==0)
            k++;
    cout << k;
    return 0;
}
