/**
Archivo: App.cpp
Autor: Carlos Hernandez
Fecha creacion: 07/03/2022
Fecha ultima modificacion: 07/03/2022
licencia: GNU-GPL
*/

#include "App.h"

/*
Nombre: App
Funcion: Constructor
Retorno: No aplica
*/
App::App()
{
}
/*
Nombre: ~App
Funcion: Destructor
Retorno: No aplica
*/
App::~App()
{
  for (Libro *libro : misLibros)
  {
    if (libro)
    {
      delete libro;
      libro = nullptr;
    }
  }
  misLibros.clear();
}

Libro *App::crearAudioLibro()
{
  AudioLibro *miAudioLibro = new AudioLibro();
  return miAudioLibro;
}

Libro *App::crearLibro()
{
  Libro *miLibro = new Libro();
  return miLibro;
}

Libro *App::crearLibroElectronico()
{
  LibroElectronico *miLibroElectronico = new LibroElectronico();
  return miLibroElectronico;
}

Libro *App::crearLibroPapel()
{
  LibroPapel *miLibroPapel = new LibroPapel();
  return miLibroPapel;
}

void App::agregarLibro()
{
  int opcion;
  string aux;
  cout << "¿Que clase de Libro quiere crear? : \n1:Libro  \n2:Audio Libro  \n3:Libro Electronico  \nOtro numero: LibroPapel \nOpcion: ";
  getline(cin, aux);
  opcion = stoi(aux);
  if (opcion == 1)
  {
    Libro *libro = crearLibro();
    misLibros.push_back(libro);
  }
  else if (opcion == 2)
  {
    Libro *libro = crearAudioLibro();
    misLibros.push_back(libro);
  }
  else if (opcion == 3)
  {
    Libro *libro = crearLibroElectronico();
    misLibros.push_back(libro);
  }
  else
  {
    Libro *libro = crearLibroPapel();
    misLibros.push_back(libro);
  }
}

void App::imprimirLibros()
{
  for (Libro *libro : misLibros)
  {
    cout << libro->mostrarLibro() << endl;
    cout << endl;
  }
}

vector<Libro *> App::getMisLibros(){
  return misLibros;
}

void App::modificarLibros(){
  int index = 0;
  for(Libro* libro: misLibros){
    string aux;
    cout << "Escriba el mensaje del libro #"<<index<<" ";
    getline(cin, aux);
    libro->setMensaje(aux);
    cout << "Escriba nombre del libro #" << index<< " ";
    getline(cin, aux);
    libro->setNombreLibro(aux);
    index+=1;
    cout << endl;
  }
}

void App::agregarLibrosAutomatico(){
  //Vector al final: {audioLibro,libro,libroElectronico,LibroPapel}
  //Agregamos un audioLibro
  Libro* miAudioLibro = crearAudioLibro();
  miAudioLibro->setMensaje("Apasionate por el audio libro");
  miAudioLibro->setNombreLibro("La vida");
  misLibros.push_back(miAudioLibro);
  // Agregamos un libro
  Libro *milibro = crearLibro();
  milibro->setMensaje("Mensaje del Libro normal");
  milibro->setNombreLibro("Alma");
  misLibros.push_back(milibro);
  // Agregamos un libro electronico
  Libro *miLibroElectronico = crearLibroElectronico();
  miLibroElectronico->setMensaje("Leer digital es mejor");
  miLibroElectronico->setNombreLibro("Ventajas");
  misLibros.push_back(miLibroElectronico);
  // Agregamos un libro papel
  Libro *miLibroPapel = crearLibroPapel();
  miLibroPapel->setMensaje("El papel nunca muere");
  miLibroPapel->setNombreLibro("CodigoFV");
  misLibros.push_back(miLibroPapel);
}