

#todo reproductor de musica
import random

class Reproductor:
    def __init__(self, nombre):
        self.nombre = nombre
        self.canciones = []
        self.estado = "detenido" #estado= repoduciendo, pausado, detenido
        self.cancion_actual = None
    
    def agregar_cancion(self, cancion):
        self.canciones.append(cancion)
    
    def eliminar_cancion(self,cancion):
        if canciones in self.canciones:
            self.cancion.remove(self.cancion)

    def mostrar_canciones(self):
        canciones = self.canciones
        return canciones
    
    def reproducir_cancion(self,cancion):
        if cancion in self.canciones:
            self.cancion_actual = cancion
            self.estado = "reproduciendo"
    
    def pausar_cancion(self):
        if self.estado == "reproduciendo":
            self.estado = "pausado"
    
    def detener_cancion(self):
        if self.estado in ["reproduciendo", "pausado"]:
            self.estado = "detenido"
            self.cancion_actual = None
    
    def siguiente_cancion(self):
        if self.cancion_actual:
            posicion = self.canciones.index(self.cancion_actual)
            if posicion < len(self.canciones) - 1:
                self.cancion_actual = self.canciones[posicion + 1]
                self.estado = "reproduciendo"
        
    def cancion_anterior(self):
        if self.cancion_actual:
            posicion = self.canciones.index(self.cancion_actual)
            if posicion > 0:
                self.cancion_actual = self.canciones[posicion - 1]
                self.estado = "reproduciendo"
    
    def mostrar_cancion_actual(self):
        return self.cancion_actual
    
    def mostrar_estado(self): #estado= repoduciendo, pausado, detenido
        return self.estado
    
    def reproducir_aleatorio(self):
        if self.canciones:
            self.cancion_actual = random.choice(self.canciones)
            self.estado = "reproduciendo"
    


reproductor = Reproductor("Mi reproductor")
  
def menu():    
    print("Reproductor de musica")
    print("Elige una opcion:")
    print("1. Agregar cancion")
    print("2. Eliminar cancion")
    print("3. Mostrar canciones")
    print("4. Reproducir cancion")
    print("5. Pausar cancion")
    print("6. Detener cancion")
    print("7. Siguiente cancion")
    print("8. Cancion anterior")
    print("9. Mostrar cancion actual")
    print("10. Mostrar estado")
    print("11. Reproducir aleatorio")
    print("12. Salir")
    print()
    return int(input("Selecciona una opcion: "))



while True:
    opcion = menu()

    if opcion == 1:
        nombre_cancion = input("Ingresa el nombre de la canción a agregar: ")
        reproductor.agregar_cancion(nombre_cancion)
        print(f"{nombre_cancion} ha sido agregada a la lista de reproducción.")

    elif opcion == 2:
        nombre_cancion = input("Ingresa el nombre de la canción a eliminar: ")
        reproductor.eliminar_cancion(nombre_cancion)
        print(f"{nombre_cancion} ha sido eliminada de la lista de reproducción.")

    elif opcion == 3:
        canciones = reproductor.mostrar_canciones()
        print("Canciones en la lista de reproducción:")
        for cancion in canciones:
            print(cancion)

    elif opcion == 4:
        nombre_cancion = input("Ingresa el nombre de la canción a reproducir: ")
        reproductor.reproducir_cancion(nombre_cancion)

    elif opcion == 5:
        reproductor.pausar_cancion()

    elif opcion == 6:
        reproductor.detener_cancion()

    elif opcion == 7:
        reproductor.siguiente_cancion()

    elif opcion == 8:
        reproductor.cancion_anterior()

    elif opcion == 9:
        cancion_actual = reproductor.mostrar_cancion_actual()
        print(f"Canción actual: {cancion_actual}")

    elif opcion == 10:
        estado = reproductor.mostrar_estado()
        print(f"Estado actual: {estado}")

    elif opcion == 11:
        reproductor.reproducir_aleatorio()

    elif opcion == 12:
        print("Saliendo del reproductor de música.")
        break

    else:
        print("Opción no válida. Inténtalo de nuevo.")
            
    
    
      
        
        
        
        