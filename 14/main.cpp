//14. Дана строка. Если она начинается на 'abc', то заменить их на 'www', иначе добавить в конец строки 'zzz'.

#include <iostream>
#include <string>

using namespace std;

void Replace(string &str)
{
    if(str.find("abc") == 0)
        str.replace(0, 3, "www");
    else
        str += "zzz";
}

int main()
{
    string str;
    getline(cin, str);

    Replace(str);
    cout << str;

    return 0;
}
