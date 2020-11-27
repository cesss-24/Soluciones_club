#include <iostream>

using namespace std;

int main()
{
        int a,b;
        cin>>a>>b;
        string arreglo[a][b];
    //Guardar arreglo
    for(int columnas=0; columnas<a; columnas++){
        for(int filas=0; filas<b; filas++){
            cin>>arreglo[columnas][filas];
        }
    }
    //Imprimir arreglo
    cout<<endl;
    for(int columnas=0; columnas<a; columnas++){
        for(int filas=0; filas<b; filas++){
            cout<<arreglo[columnas][filas]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
