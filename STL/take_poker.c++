#include <iostream>
#include <queue>
using namespace std;
queue< int> que;

bool is_odd (int i)
{
    if (i%2)
        return true;
    else
        return false;
}
int main()
{
    int n ,i,t;
    cin >> n;
    for ( i=0;i<n;i++)
    {
        cin >> t;
        que.push(t);
    }
    for (int j=0;j<n;j++)
    {
        t = que.front();
        que.pop();
        if (is_odd(t))
        {
            cout << t;
        }
        else
        {
            que.push(t);
        }
    }
    while (!que.empty())
    {
        cout << que.front();
        que.pop();
    }
    return 0;
}