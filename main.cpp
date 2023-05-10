#include <iostream>

// es el de dar acceso al espacio de nombres (namespace) std
using namespace std;

// se usa para ejecutar o llamar a la ejecución de un programa
int main() {
  
  // declaramos la variable en donde se almacenará el dato ingresado por el usuario
  float y, result;

  cout << "Primer ejercicio\n";
  cout << "Operacion que se esta realizando\n ------- x = 7 + 5 * Y / 5 - 1 -------- \n";
  // pedimos al usuario el numero Y
  cout << "Ingresa el numero Y \n: ";
  //se almacena el dato usando cin para la variable y
  cin >> y;
  
  // tomamos el valor de y y realizamos la operacion
  cout << "x = 7 + 5 * " << y << " / 5 - 1 \n";
  result = 7 + 5 * y / 5 - 1;
  cout << "El resultado de X es de: " << result;

  return 0;
  
}