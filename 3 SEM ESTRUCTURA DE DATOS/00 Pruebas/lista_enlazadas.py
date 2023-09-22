

""" module lista_enlazadas """


class Pila:
    def __init__(self):
        self.items = []  # Usamos una lista de Python como base para la pila

    def esta_vacia(self):
        return len(self.items) == 0

    def push(self, elemento):
        # Agregamos el elemento al final de la lista
        self.items.append(elemento)

    def pop(self):
        if not self.esta_vacia():
            return self.items.pop()  # Eliminamos y devolvemos el último elemento de la lista
        else:
            return None  # Pila vacía, no se puede realizar pop

    def peek(self):
        if not self.esta_vacia():
            # Devolvemos el último elemento sin eliminarlo
            return self.items[-1]
        else:
            return None  # Pila vacía, no hay elemento para ver

    def tamano(self):
        return len(self.items)


# Ejemplo de uso de una pila
mi_pila = Pila()

mi_pila.push(1)
mi_pila.push(2)
mi_pila.push(3)

print("Elemento en la parte superior de la pila:", mi_pila.peek())
print("Tamaño de la pila:", mi_pila.tamano())

while not mi_pila.esta_vacia():
    elemento = mi_pila.pop()
    print("Elemento retirado:", elemento)