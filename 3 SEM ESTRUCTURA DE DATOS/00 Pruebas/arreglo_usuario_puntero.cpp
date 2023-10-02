#include <iostream>

int main()
{
    int n;

    std::cout << "Ingresa la cantidad de elementos que deseas en el arreglo: ";
    std::cin >> n;

    int *puntero = new int[n]; // Se reserva memoria dinámica para el arreglo

    std::cout << "Ingresa " << n << " elementos:" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cin >> *(puntero + i); // Ingresa los elementos a través del puntero
    }

    std::cout << "Elementos ingresados:" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout << "Elemento " << i + 1 << ": " << *(puntero + i) << std::endl;
    }

    delete[] puntero; // Liberar la memoria dinámica cuando ya no se necesita

    return 0;
}
