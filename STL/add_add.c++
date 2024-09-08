#include <iostream>
#include <vector>
using namespace std;
vector< int> d ;
int main()
{
    int i,n,t1,t2,t;
    cin>> n;
    d.push_back(1);
    d.push_back(1);
    cout << "1" << " " << "1" ;
    for (i = 3; i<= n;i++)
    {
        t1 = d.back();
        d.pop_back();
        t2 = d.back();
        t = t1 + t2;
        d.push_back(t1);
        d.push_back(t);
        cout << " " << d.back() ;
    }
    cout << endl;
}