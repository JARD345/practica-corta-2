#include <iostream>

int main() {
using namespace std;
/*
int numeros [100];
int numeros2[100];
int n,i,j,k,orden=0;
    cout<<"Digite el numero de elementos del arreglo"<<endl;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cout << i + 1 << " Digite un numero: ";
        cin >> numeros[i];

        }
    for (i = 1; i < n; i++) {
        for (j = 0; j < n - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                k = numeros[j + 1];
                numeros[j + 1] = numeros[j];
                numeros[j] = k;
            }
            }
            cout << "los numeros ordenados quedan de la siguiente forma: " << endl;
            for (int i = 0; i < n; ++i) {
                cout << numeros[i] << endl;
            }
*/
int vector[]={1,2,3,4,5,6,7,8,9};
int c,n=8;
cout<<"Ingrese un numero"<<endl;
cin>>c;
    for (int i = 0; i <= c; ++i) {
        if (c==vector[i]){
            cout<<"El numero "<<c<<" Si se encuentra en la lista"<<endl;
            cout<<"El numero se encuentra en la posicion: "<<i<<endl;
        }

    }
            return 0;
        }

