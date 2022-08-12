
#include <iostream>

using namespace std;

int main()
{
    int n, a, total=0, answer=0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        total += a;
    }
    for (int i = 1; i <= 5; ++i)
    {
        if ((total + i) % (n + 1) != 1)
        {
            answer += 1;
        }
    }
    cout << answer << endl;
    return 0;
}