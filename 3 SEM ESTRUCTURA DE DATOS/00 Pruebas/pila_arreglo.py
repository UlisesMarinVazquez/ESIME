

""" module pila_arreglo """

""" # Crear una lista vacía
mi_lista = []

# Agregar elementos a la lista
mi_lista.append(1)
mi_lista.append(2)
mi_lista.append(3)

# Imprimir la lista
print("Lista después de agregar elementos:", mi_lista)

# Eliminar un elemento de la lista
mi_lista.remove(2)

# Imprimir la lista actualizada
print("Lista después de eliminar un elemento:", mi_lista)

# Acceder a elementos de la lista
primer_elemento = mi_lista[0]
ultimo_elemento = mi_lista[-1]

# Imprimir elementos individuales
print("Primer elemento:", primer_elemento)
print("Último elemento:", ultimo_elemento) """


""" //////////////////////////////////////////// """


class PilaConArreglo:
    def __init__(self, capacidad):
        self.capacidad_maxima = capacidad
        self.arreglo = [None] * capacidad
        self.puntero_superior = -1  # Pila vacía al inicio

    def esta_vacia(self):
        return self.puntero_superior == -1

    def esta_llena(self):
        return self.puntero_superior == self.capacidad_maxima - 1

    def push(self, elemento):
        if not self.esta_llena():
            self.puntero_superior += 1
            self.arreglo[self.puntero_superior] = elemento
        else:
            print("La pila está llena. No se puede realizar push.")

    def pop(self):
        if not self.esta_vacia():
            elemento = self.arreglo[self.puntero_superior]
            self.arreglo[self.puntero_superior] = None
            self.puntero_superior -= 1
            return elemento
        else:
            print("La pila está vacía. No se puede realizar pop.")
            return -1  # Valor predeterminado en caso de pila vacía

    def peek(self):
        if not self.esta_vacia():
            return self.arreglo[self.puntero_superior]
        else:
            print("La pila está vacía. No hay elementos para ver.")
            return -1  # Valor predeterminado en caso de pila vacía

    def tamano(self):
        return self.puntero_superior + 1


capacidad = int(input("Ingrese la capacidad máxima de la pila: "))
mi_pila = PilaConArreglo(capacidad)

while True:
    print("1. Push  2. Pop  3. Peek  4. Tamaño  5. Mostrar  6. Salir")
    opcion = int(input("Seleccione una opción: "))

    if opcion == 1:
        elemento = int(input("Ingrese un elemento: "))
        mi_pila.push(elemento)
    elif opcion == 2:
        if not mi_pila.esta_vacia():
            print("Elemento retirado:", mi_pila.pop())
        else:
            print("La pila está vacía. No se puede realizar pop.")
    elif opcion == 3:
        if not mi_pila.esta_vacia():
            print("Elemento en la parte superior de la pila:", mi_pila.peek())
        else:
            print("La pila está vacía. No hay elementos para ver.")
    elif opcion == 4:
        print("Tamaño de la pila:", mi_pila.tamano())
    elif opcion == 5:
        if not mi_pila.esta_vacia():
            print("Pila:")
            print("Índice\tValor")
            for i in range(mi_pila.tamano()):
                print(i, "\t", mi_pila.arreglo[i])
        else:
            print("La pila está vacía.")
    elif opcion == 6:
        break
    else:
        print("Opción inválida.")
