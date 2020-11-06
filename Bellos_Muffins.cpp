#include <iostream>

using namespace std;

int main()
{
    int n, m;
    double r;
    cin>>n>>m;
    r = (n%m)+(n/m);
    cout<<"A Gil le tocan "<<r<<" muffins";

    return 0;
}
