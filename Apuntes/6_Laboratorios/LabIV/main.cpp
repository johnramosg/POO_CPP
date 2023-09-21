#include "httplib.h"
#include "App.h"
#include "LibroPapel.h"
#include "LibroElectronico.h"
#include "AudioLibro.h"
#include <iostream>
using namespace std;

int main(void)
{
  // Creo un objeto de tipo Server
  httplib::Server svr;

  // ---------------------------------

  // Método para buscar libros por opción, con polimorfismo
  // opcion 1 - tiposervidor
  // opcion 2 - juegos
  // opcion 3 - peliculas
  // opcion 4 - música
  svr.Get(R"(/Libros/(\d+))", [&](const auto &req, auto &res)
          {
        // Se carga la opción
        auto numbers = req.matches[1];
        string number = numbers;
        // Se convierte la opcion a entero
        int opcion = atoi(number.c_str());

      App server;

      server.agregarLibrosAutomatico();


        switch (opcion)
        {
        case 1:
            res.set_content(server.getMisLibros()[opcion-1]->mostrarLibro(), "text/plain");
            break;
        case 2:
          res.set_content(server.getMisLibros()[opcion - 1]->mostrarLibro(), "text/plain");
          break;
        case 3:
          res.set_content(server.getMisLibros()[opcion - 1]->mostrarLibro(), "text/plain");
          break;
        default:
            res.set_content("No selecciono una opcion valida", "text/plain");
            break;
        } });
  // ---------------------------------

  // ---------------------------------

  // Mensaje de servidor en funcionamiento
  cout << "Servidor en funcionamiento..." << endl;
  svr.listen("0.0.0.0", 8080);
}