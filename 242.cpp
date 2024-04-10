#include <vector>
#include <string>
using namespace std;

bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
        return false;

    vector<int> alpha;
    alpha.resize(26, 0);
    for (char character : s)
    {
        alpha[int(character) - int('a')]++;
    }
    for (char character : t)
    {
        alpha[int(character) - int('a')]--;
    }
    for (auto i : alpha)
    {
        if (i != 0)
            return false;
    }
    return true;
}
