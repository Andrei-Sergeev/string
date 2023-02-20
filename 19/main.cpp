//19. В данной строке вставить после каждого символа 'a' символ 'b'.

#include <iostream>
#include <string>

using namespace std;

string FindA (string &str)
{
    string str1 = "";
    for(char x : str)
        if (x == 'a')
            str1 += "ab";
        else
            str1 += x;
    return str1;

}

int main()
{
    string str;
    getline(cin, str);
    cout << FindA(str);

    cin.get();
    return 0;
}
