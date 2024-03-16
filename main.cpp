#include <iostream>

int main() {
using namespace std;
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

            return 0;
        }
    }
