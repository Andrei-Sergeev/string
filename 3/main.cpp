// 3. Составить алгоритм, находящий, сколько слов в тексте состоит из 6 символов.

#include <iostream>
#include <string>

using namespace std;

int FindNWord (string &str, int n)
{
    int a = 0, count = 0;
    int found = str.find(" ", a);

    while(found != -1)
    {
       found = str.find(" ", a);

       if(found == -1)
           break;

       if (found - a == n)
           a = found + 1, ++count;
       else
           a = found + 1;
    }
    if(str.length() - a == n)
        count += 1;

    return count;
}

int main()
{
    string str;
    getline(cin, str);
    cout << FindNWord(str, 6);

    cin.get();
    return 0;
}
