/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * main.cc
 * Copyright (C) 2014 vbucheli <vbucheli@Blue-Ant>
 *
 * BandaMusicos is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * BandaMusicos is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "musico.h"
#include "cantante.h"
#include "espectador.h"
#include "rapero.h"
#include "mariachi.h"

int main()
{

  try
  {
    // Realizado por Kevin David Rodriguez Belalacazar
    // Asignatura:: Introducción a la programación orientada a objetos
    // Fecha: 9 de agosto del 2019
    // TALLER

    // 1. Instanciar un objeto con "" , por ejemplo
    Persona persona("");
    // Persona persona("Belle");
    // persona.imprimir(cout);

    // 2. Instanciar al músico santana , Set instrumento e Imprimir, por ejemplo:
    Musico santana("Santana");
    santana.setInstrumento("Guitarra");
    santana.imprimir(cout);
    // Musico santana("Santana");
    //   santana.setInstrumento("Guitarra");
    //   santana.imprimir(cout);

    // 3. Instanciar a la persona santana , Set instrumento e Imprimir, por ejemplo:
    // Persona santana("Santana");
    // santana.setInstrumento ("Guitarra");
    // santana.imprimir (cout);

    // 3.1 Qué sucede? Por qué sucede? Cómo asocia lo sucedido a los conceptos vistos en clase, explique su respuesta.
    //¿Qué sucede?
    // Error 1: Redefinition of different type: 'Persona' vs 'Musico' Persona santana ("Santana");
    // Error 2: Previous definition Musico santana("Santana");
    //¿Por qué sucede?
    //  Error de compilación: A pesar de ser objetos de diferentes clase, se generará un error ya que hay una clase hija de otra que utilizan la instancia de un objeto con el mismo nombre
    //--
    // Musico y cantante son clases hijas de la clase persona, heredan todos sus metodos a los cuales se les pueden añadir cosas y pasarán de ser "es un" a "es parecido a un".

    // 4. Instanciar a la cantante shakira y su nombre artisitco , pruebe Set instrumento, setcantaBien e Imprimir , por ejemplo:
    // Cantante shakira("Shakira Mebarak");
    // shakira.setcantaBien(false);
    // shakira.setnombreArtistico("Shakira");
    // shakira.imprimir(cout);
    // Cantante shakira("Shakira Mebarak");
    // shakira.setcantaBien(true);
    // shakira.setnombreArtistico("Shakira");

    // 5. incluya la edad para el musico y el cantante como un método set imprimalo.
    // DONE
    // shakira.setEdad(28);
    // santana.setEdad(40);
    // cout << endl;
    // shakira.imprimir(cout);
    // cout << endl;
    // santana.imprimir(cout);

    // 6. Implemente una nueva funcionalidad en la clase musico que toca varios instrumentos, la propiedad es un entero que dice cuántos instrumentos toca, utilice el nuevo método en la clase muscio int cuantas_instrumentos() const throw(); //
    // Nueva función
    // DONE
    // cout << endl;
    //  Musico KurtCobainn("Kurt");
    //  KurtCobainn.setInstrumento("Guitarra");
    //  KurtCobainn.setCantInstrumento(3);
    //  KurtCobainn.imprimir(cout);

    // 7. Defina el método imprimir como virtual imprima un cantante y un musico. Qué sucede? Por qué sucede? Cómo asocia lo sucedido a los conceptos vistos en clase, explique su respuesta
    // DONE
    // Utilizando virtual un método tendrá diferentes implementaciones en todo el codigo en diferentes subclases, en este caso el método imprimir de la clase madre persona será tomada por sus subclases y podrán tener diferentes versiones de el metodo imprimir.
    // Se utiliza la palabra-clave virtual para avisar al compilador que un método será polimórfico y que en las clases derivadas existen distintas definiciones del mismo.

    // 8. Implemente la clase espectador que hereda de persona que le gusta o no la banda
    // cout << endl;
    // Espectador Rojas("Rojas");
    // Rojas.setGustarBanda(true);
    // Rojas.imprimir(cout);

    // cout << endl;

    // Cantante *puntero=new Cantante("Artista");
    // delete puntero;
    // puntero=0;
    // puntero = new Rapero("Lina");
    // puntero->cantar();

    // Cantante *puntero1=new Mariachi("Artista2");
    // delete puntero;
    // puntero1=0;
    // puntero1= new Mariachi("Julián");
    // puntero1->cantar();
  }

  catch (int &codigo)
  {
    switch (codigo)
    {
    case 1:
      cout << "Excepción " << codigo << ". Se debe a que instanciaste un objeto persona con un nombre vacío o sin caracteres" << endl;
    default:
      cout << "Error " << codigo << " Al instaciar el objeto o definir las propiedades del objeto" << endl;
    };
  }
  catch (exception &e)
  {
    cout << "Error interno: " << e.what() << endl;
  }
  catch (...)
  {
    cout << "Error interno. Será corregido en la próxima versión de la aplicación" << endl;
  }
}
