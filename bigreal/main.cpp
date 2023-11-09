#include <bits/stdc++.h>
#include "bigreal.cpp"

using namespace std;

int main()
{
    bigreal s1("+2419837242142.3213124123");
    bigreal s2("+9232313232143.9213082331");
    bigreal s3("123.123");

    // test 1
    bool bigger = (s2 > s1);
    cout << bigger << endl;

    // test 2
    bool lessthan = (s2 < s1);
    cout << lessthan << endl;

    // test 3
    bool equality = (s2 == s1);
    cout << equality << endl;

    // test 4
    cout << s1.checkReal() << endl;

    // test 5
    s2.setNumber("-+3124213.23214123");
    cout << s2.checkReal();

    // test 6
    s2.setNumber("+23984723544.1231423142");
    cout << s1 + s2 << endl;

    // test 7
    s1.setNumber("-2421413.12413124");
    s2.setNumber("-5134124142.21421324");
    cout << s1 + s2;
    
}
