// json.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <windows.h>
#include <nlohmann/json.hpp>

using json = nlohmann:: / json;
using namespace std;

int main()
{
	json j;
  j["Pi"] = 3.141592;
  j["feliz"] = true;
  j["nombre"] = "pedro";
  j["vacio"] = nullptr;
  j["nuevo"]["valor"] = 25;
  j["lista"] = { 1,0,3 };
  j["nuevo"]["olista"] = { 0,1,2,3 };
  j["objeto"] = { {"moneda","USD"},{"valor",18.91} };
  cout << j << endl;
  json j2 = { {"Pi",3.141592},
			 {"feliz",true},
		{"nombre","pedro"},
	    {"vacio",nullptr},
		{"nuevo",{ {"valor",25}}},
		{"lista",{1,0,3}},
		{"objeto",{{"moneda","USD"},{"valor",1891}}
  } };
  cout << j2 << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
