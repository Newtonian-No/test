#include <iostream>
using namespace std;
int main()
{
    struct node
    {
        int num;
        node *next;/* data */
    };
    int n , m ;
    node *head, *p, *r;
    int i,j,k,l;
    cin >> n >> m;
    head = new node;
    head -> num =1;
    head -> next = NULL;
    r = head;
    for ( i=2;i<=n;i++ )
    {
        p = new node;
        p -> num = i;
        p -> next = NULL;
        r -> next = p;
        r = p;
    }
    r -> next = head;
    r = head;
    for (i =1 ;i<=n;i++)
    {
        for (j =1;j <=m-2;j++)
        {
            r = r -> next;
        }
        cout << r->next->num << " ";
        r->next = r->next->next;
        r = r->next;
    }
    return 0;
}