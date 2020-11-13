#include <iostream>

using namespace std;

int main()
{
    int cont=0;
    for (int i=0; i<=4; i++){
        for (int j=0, k=2; j<4 && k<9; j++, k+=2){
            cout<<"("<<i<<","<<j<<","<<k<<")"<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
