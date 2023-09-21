# Herencia

## Tipo de relaciones

> Si la clase Derivada añade nuevas funciones o atributos, además de las recibidas en la clase Base, entonces es una relación “es parecido a”.
> Si la clase Derivada no añade nuevas funciones ni atributos entonces es una relación “es un”.

## Ejemplo Herencia

- Clase Persona

```c++
PERSONA.H
class Persona{
  protected:
    string nombre;
  public:
    Persona(string nombre);
}

PERSONA.CPP
Persona::Persona(string nombre):nombre(nombre){
}
```

-Clase Bombero

```c++
BOMBRERO.H
class Bombero : public Persona{
  protected:
    int manguereas;
  public:
    Bombrero(string nombre, int mangueras)
}

BOMBERO.CPP
Bombrero::Bombrero(string nombre, int mangueras) : Persona(nombre),mangueras(mangueras){
}
```

# Cosas a tener en cuenta

- Si la clase hija no va a ser a su vez una clase padre pon los atributos en private y sin virtual en los metodos
- Si no va a hacer algo especial en el destructor no hay necesidad de ponerlo 
