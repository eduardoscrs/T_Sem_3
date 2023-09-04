#include <iostream>

class Rectangulo {
private:
    double base;
    double altura;

public:
    Rectangulo(double b, double a) : base(b), altura(a) {}

    double area() {
        return base * altura;
    }

    double perimetro() {
        return 2 * (base + altura);
    }

    void cambiar_base(double b) {
        base = b;
    }

    void cambiar_altura(double a) {
        altura = a;
    }

    void imprimir() {
        std::cout << "Base: " << base << std::endl;
        std::cout << "Altura: " << altura << std::endl;
        std::cout << "Area: " << area() << std::endl;
        std::cout << "Perimetro: " << perimetro() << std::endl;
    }
};    

int main() {
    double baseUsuario, alturaUsuario;
    std::cout << "Ingrese la base del rectangulo: ";
    std::cin >> baseUsuario;
    std::cout << "Ingrese la altura del rectangulo: ";
    std::cin >> alturaUsuario;
    
    if (baseUsuario == alturaUsuario) {
        std::cout << "La base y la altura son iguales, es un cuadrado" << std::endl;
        return 1;
    } else {
        Rectangulo rectangulo(baseUsuario, alturaUsuario);
        rectangulo.imprimir();
    }

    return 0;
}
