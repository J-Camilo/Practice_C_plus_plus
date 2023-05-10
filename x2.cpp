#include <iostream>

// es el de dar acceso al espacio de nombres (namespace) std
using namespace std;

int main() {

  // declaramos la variable en donde se almacenará el dato ingresado por el
  // usuario
  float y, result;

  cout << "Segundo ejercicio\n";
  cout << "Operacion que se esta realizando\n ------- x = (4 * 2 * (3 + (y * 9 / 5) - 7) / 6) -------- \n";
  // pedimos al usuario el numero Y
  cout << "Ingresa el numero Y \n: ";
  cin >> y;

  cout << "(4 * 2 * (3 + (" << y << " * 9 / 5) - 7) / 6)\n";
  result = (4 * 2 * (3 + (y * 9 / 5) - 7) / 6);
  cout << "El resultado de X es de: " << result;

  return 0;
}