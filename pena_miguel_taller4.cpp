#include <iostream>
using namespace std;

// El siguiente programa calcula la serie fibonacci dada hasta el dato ingresado por el usuario y los numeros primos de la secuencia del mismo.
int main() { 
    int n, primos = 0;
    
    cout << "Ingresa un numero: ";
    cin >> n;
    
    int a = 0, b = 1;
    
    for(int i = 0; i < n; i++){
        int num;
        
    if(i == 0)
        num = a;
            
    else if(i == 1)
            num = b;
            
    else{
        num = a + b;
        a = b;
        b = num;
    }
    cout << num << " ";
    if(num > 1){
        int j;
            for(j = 2; j < num; j++){
            if(num % j == 0)
            break;
            }
        if(j == num)
        primos++;
        }
    }
    cout << endl << "Se encontraron " << primos << " numeros primos en la secuencia.";
return 0;
}
