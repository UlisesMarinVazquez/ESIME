#include <iostream>

using namespace std;

// Clase pública
class PublicClass {
public:
    void PublicMethod() {
        std::cout << "Este es un método público" << std::endl;
    }
};

// Clase privada
class PrivateClass {
private:
    void PrivateMethod() {
        std::cout << "Este es un método privado" << std::endl;
    }
    
public:
    void AccessPrivateMethod() {
        PrivateMethod();  // Accede al método privado desde dentro de la clase
    }
};

// Clase protegida
/* class ProtectedClass {
protected:
    void ProtectedMethod() {
        std::cout << "Este es un método protegido" << std::endl;
    }
}; */

int main() {
    PublicClass publicObj;
    publicObj.PublicMethod();  // Accede al método público de la clase pública
    
    PrivateClass privateObj;
    privateObj.AccessPrivateMethod();  // Accede a un método privado mediante un método público
    
    //ProtectedClass protectedObj;
    //protectedObj.ProtectedMethod();  // No se puede acceder directamente a un método protegido desde fuera de la clase
    
    return 0;
}
