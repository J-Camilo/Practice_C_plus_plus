#include <iostream>
using namespace std;

int main() {
  // declaramos la variable en donde se almacenará el dato ingresado por el
  // usuario
  float y, result;

  cout << "Tercer ejercicio\n";
  cout << "Operacion que se esta realizando\n ------- x = 6 + (14 * (55 - (20 + (y / 4) - 1) / 3 )) - 10 -------- \n";
  // pedimos al usuario el numero Y
  cout << "Ingresa el numero Y \n: ";
  cin >> y;

  cout << "6 + (14 * (55 - (20 + (" << y << " / 4) - 1) / 3 )) - 10 \n";
  result = 6 + (14 * (55 - (20 + (y / 4) - 1) / 3 )) - 10;
  cout << "El resultado de X es de: " << result;

  return 0;
}