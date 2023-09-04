#include <iostream>

class playlist {
    public:
        playlist();
        playlist(std::string nombre, std::string autor, int duracion);
        void imprimir();
        void cambiar_nombre(std::string nombre);
        void cambiar_autor(std::string autor);
        void cambiar_duracion(int duracion);
        std::string obtener_nombre();
        std::string obtener_autor();
        int obtener_duracion();
        