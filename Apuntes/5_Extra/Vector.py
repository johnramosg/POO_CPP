# DEFINIR LA CLASE VECTOR CON SU CONSTRUCTOR
# Atributos privados: n, V[]
# En el constructor se inicializan los valores de n y del arreglo V



import random

class vector :# Encabezado:

    def __init__(self, n):  # Constructor
        self.n = n
        self.V = int


    def posicionesUsadas(self):
        return self.V[0]

    def construyeVector(self, m, r):
        self.V[0] = m
        for i in range(1, m + 1):
                self.V[i] = random.randint(1, r)

    def esVacio(self):
        return self.V[0] == 0


    def esLleno(self):
        return self.V[0] == self.n


    def tamagno(self):
        return self.n


    def imprimeVector(self, mensaje="vector sin nombre: \t"):
        print("\n", mensaje, end=" ")
        for i in range(1, self.V[0] + 1):
            print(self.V[i], end=", ")
        print()


    def agregarDato(self, d):
        if self.esLleno():
            return
        self.V[0] = self.V[0] + 1
        self.V[self.V[0]] = d


    def intercambiar(self, a, b):
        aux = self.V[a]
        self.V[a] = self.V[b]
        self.V[b] = aux


    def sumarDatos(self):
        s = 0
        for i in range(1, self.V[0] + 1):
            s = s + self.V[i]
        return s


    def burbuja(self):
        for i in range(1, self.V[0]):
            for j in range(1, self.V[0] - i + 1):
                if self.V[j] < self.V[j + 1]:
                    self.intercambiar(j, j + 1)


    def mayor(self):
        mayor = 1
        for i in range(1, self.V[0] + 1):
            if self.V[i] > self.V[mayor]:
                mayor = i
        return mayor


    def menor(self):
        menor = 1
        for i in range(1, self.V[0] + 1):
            if self.V[i] < self.V[menor]:
                menor = i
        return menor


    def buscarDato(self, d):
        i = 1
        while i <= self.V[0] and self.V[i] != d:
            i = i + 1
        if i <= self.V[0]:
            return i
        return -1


    def buscarDondeInsertar(self, d):
        i = 1
        while i <= self.V[0] and self.V[i] < d:
            i = i + 1
        return i


    def insertar(self, d, i=0):
        if self.esLleno():
            print("\nVector lleno, no se puede insertar")
            return
        if i == 0:
            i = self.buscarDondeInsertar(d)
            for j in range(self.V[0], i - 1, -1):
                self.V[j+1] = self.V[j]
            self.V[i] = d
            self.V[0] = self.V[0] + 1


    def borrarDatoEnPosicion(self, i):
        if i <= 0 or i > self.V[0]:
            print("\nParámetro i inválido")
            return
        for j in range(i, self.V[0]):
            self.V[j] = self.V[j + 1]
        self.V[0] = self.V[0] - 1


    def borrarDato(self, d):
        i = self.buscarDato(d)
        if i != -1:
            self.borrarDatoEnPosicion(i)

    def seleccion(self):
        for i in range(1, self.V[0]):
            k = i
        for j in range(i + 1, self.V[0] + 1):
            if self.V[j] < self.V[k]:
                k = j
        self.intercambiar(k, i)

    def construyeVector(self,n,x=100):
        vec = vector(n)
        vec.V[0] = n
        for i in range(1,vec.V[0]+1):
            vec.V[i] = random.randint(1,x)