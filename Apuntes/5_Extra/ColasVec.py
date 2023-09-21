# REPRESENTACIÓN DE COLAS EN UN VECTOR
from Vector import vector

"""
Definiremos la clase cola derivada de la clase vector. Manejaremos la cola circularmente en el vector. Para manejar una cola circularmente en un vector se requiere definir un vector de n elementos con los subíndices en el rango desde 0 hasta n – 1, es decir, si el vector tiene 10 elementos, los subíndices variarán desde 0 hasta 9.Adicionalmente se manejan dos variables: primero y ultimo: primero apunta hacia la posición anterior en la que realmente se halla el primer dato de la cola, y ultimo apunta hacia la posición en la que realmente está el último dato de la cola.
"""


class cola(vector):
    def __init__(self, n):
        vector.__init__(self, n)
        self.primero = 0
        self.ultimo = 0

    def esLlena(self):
        return self.primero == self.ultimo

    def esVacia(self):
        return self.primero == self.ultimo

    def encolar(self, d):
        self.ultimo = (self.ultimo + 1) % self.n
        if self.esLlena():
            print("cola llena, no se puede encolar\n")
            self.ultimo = (self.ultimo - 1 + self.n) % self.n
            return
        self.V[self.ultimo] = d

    def desencolar(self):
        if self.esVacia():
            print("cola vacía, no se puede desencolar\n")
            return None
        self.primero = (self.primero + 1) % self.n
        return self.V[self.primero]

    def siguiente(self):
        if self.esVacia():
            print("cola vacía, no hay siguiente\n")
            return None
        aux = (self.primero + 1) % self.n
        return self.V[aux]
