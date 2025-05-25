#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t;
    cin >> t;
    string s = "";
    for (int i = 0; i < n; i++)
    {
        char c1;
        cin >> c1;
        s += c1;
    }

    while (t--)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }
    cout << s << endl;
    return 0;
}