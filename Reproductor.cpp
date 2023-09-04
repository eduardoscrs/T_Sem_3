#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Playlist {
public:
    Playlist(std::string nombre) {
        this->nombre = nombre;
        estado = "detenido";
        indiceActual = -1;
        tamanoMaximo = 100; // Establece el tamaño máximo de la lista de canciones
        canciones = new std::string[tamanoMaximo];
    }

    ~Playlist() {
        delete[] canciones;
    }

    void agregarCancion(std::string cancion) {
        if (indiceActual < tamanoMaximo - 1) {
            canciones[++indiceActual] = cancion;
        }
    }

    void eliminarCancion(int indice) {
        if (indice >= 0 && indice <= indiceActual) {
            for (int i = indice; i < indiceActual; i++) {
                canciones[i] = canciones[i + 1];
            }
            indiceActual--;
        }
    }

    void mostrarCanciones() {
        for (int i = 0; i <= indiceActual; i++) {
            std::cout << i + 1 << ". " << canciones[i] << std::endl;
        }
    }

    void reproducir() {
        if (indiceActual >= 0 && indiceActual <= indiceActual) {
            estado = "reproduciendo";
            std::cout << "Reproduciendo: " << canciones[indiceActual] << std::endl;
        }
    }

    void seleccionarCancion(int indice) {
        if (indice >= 0 && indice <= indiceActual) {
            indiceActual = indice;
            estado = "reproduciendo";
            std::cout << "Reproduciendo: " << canciones[indiceActual] << std::endl;
        }
    }

    void pausar() {
        estado = "pausa";
        std::cout << "Pausado: " << canciones[indiceActual] << std::endl;
    }

    void detener() {
        estado = "detenido";
        std::cout << "Detenido" << std::endl;
    }

    void siguienteCancion() {
        if (indiceActual < indiceActual) {
            indiceActual++;
            reproducir();
        }
    }

    void cancionAnterior() {
        if (indiceActual > 0) {
            indiceActual--;
            reproducir();
        }
    }

    void reproducirAleatoria() {
        if (indiceActual >= 0 && indiceActual <= indiceActual) {
            int nuevaCancion;
            do {
                nuevaCancion = rand() % (indiceActual + 1);
            } while (nuevaCancion == indiceActual);

            indiceActual = nuevaCancion;
            reproducir();
        }
    }

    std::string obtenerEstado() {
        return estado;
    }

    std::string obtenerCancionActual() {
        if (indiceActual >= 0 && indiceActual <= indiceActual) {
            return canciones[indiceActual];
        }
        return "Ninguna";
    }

private:
    std::string nombre;
    std::string *canciones;
    std::string estado;
    int indiceActual;
    int tamanoMaximo;
};

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    Playlist miLista("Mi Lista de Reproducción");

    int opcion;
    do {
        std::cout << "\nOpciones:" << std::endl;
        std::cout << "1. Agregar canción" << std::endl;
        std::cout << "2. Eliminar canción" << std::endl;
        std::cout << "3. Mostrar canciones" << std::endl;
        std::cout << "4. Reproducir" << std::endl;
        std::cout << "5. Seleccionar canción" << std::endl;
        std::cout << "6. Pausar" << std::endl;
        std::cout << "7. Detener" << std::endl;
        std::cout << "8. Siguiente canción" << std::endl;
        std::cout << "9. Canción anterior" << std::endl;
        std::cout << "10. Reproducir canción aleatoria" << std::endl;
        std::cout << "11. Ver estado de la playlist" << std::endl;
        std::cout << "12. Ver canción actual" << std::endl;
        std::cout << "13. Salir" << std::endl;

        std::cout << "Ingrese su opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                std::string cancion;
                std::cout << "Ingrese el nombre de la canción: ";
                std::cin >> cancion;
                miLista.agregarCancion(cancion);
                break;
            }
            case 2: {
                int indice;
                std::cout << "Ingrese el índice de la canción a eliminar: ";
                std::cin >> indice;
                miLista.eliminarCancion(indice - 1);
                break;
            }
            case 3:
                miLista.mostrarCanciones();
                break;
            case 4:
                miLista.reproducir();
                break;
            case 5: {
                int indice;
                std::cout << "Ingrese el índice de la canción a reproducir: ";
                std::cin >> indice;
                miLista.seleccionarCancion(indice - 1);
                break;
            }
            case 6:
                miLista.pausar();
                break;
            case 7:
                miLista.detener();
                break;
            case 8:
                miLista.siguienteCancion();
                break;
            case 9:
                miLista.cancionAnterior();
                break;
            case 10:
                miLista.reproducirAleatoria();
                break;
            case 11:
                std::cout << "Estado de la playlist: " << miLista.obtenerEstado() << std::endl;
                break;
            case 12:
                std::cout << "Canción actual: " << miLista.obtenerCancionActual() << std::endl;
                break;
            case 13:
                std::cout << "Saliendo del programa." << std::endl;
                break;
            default:
                std::cout << "Opción inválida." << std::endl;
        }

    } while (opcion != 13);

    return 0;
}
