#include <iostream>

using namespace std;

int main()
{
    int a,b,c,prom;
    cin>>a>>b>>c;
    prom = (a+b+c)/(3);
    if(prom>=6){
        cout<<"1";
    }
        else{
            cout<<"0";
        }
    return 0;
}
