#include <iostream>
using namespace std;

int main() {
  // l1, l2, l3, l4 son los lados de el cuadrado y longi es el tamaño de aquellos lados
  float lado, longi, result;
  //esta variable almacena el poligono del cliente
  string poling;

  cout << "Cuarto ejercicio\n";
  cout << "Operacion que se esta realizando\n ------- Perimetro de un poligono regular -------- \n";
  
  cout << "Ingresa el poligono que quieres calcular: ";
  cin >> poling;
  // pedimos al usuario el numero de los lados
  cout << "ingresa cuantos lados tiene el " << poling << ": ";
  cin >> lado;
  cout << "ingresa la longitud de todos los lados tiene el " << poling << ": ";
  cin >> longi;
  
  //se deja un espacio con \n esto da un salto de linea
  cout << "\n";
  //operacion
  result = lado * longi;
  cout << "El perimetro del " << poling << " es de: " << result << "\n";
  
}