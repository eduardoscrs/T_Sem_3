# T_Sem_3

Ejercicios parte 1
Objetos simples
Los siguientes ejercicios deberán realizarse en el lenguaje python.
Ejercicio 1:

Crea una clase Circulo.

Define un atributo llamado radio.

Define los siguientes métodos:

Define un método constructor el cual inicialice el valor del atributo llamado radio.
calcularArea() -> Este método retorna el área del círculo.
calcularPerimetro() -> Este método retorna el perímetro del círculo.
cambiarRadio() -> Este método permite cambiar el radio del círculo.
Fuera de la clase, instancia un objeto de clase Circulo, asignándole un radio inicial.

Muestra por pantalla el área de ese círculo.

Muestra por pantalla el perímetro de ese círculo.

Ejercicio 2:

Crea una clase Rectangulo.

Define los atributos llamados longitud y ancho.

Define los siguientes métodos:

Define un método constructor el cual inicialice los valores de sus atributos.
calcularArea() -> Este método retorna el área del rectángulo.
calcularPerimetro() -> Este método retorna el perímetro del rectángulo.
cambiarLongitud() -> Este método permite cambiar la longitud del rectángulo.
cambiarAncho() -> Este método permite cambiar el ancho del rectángulo.
Fuera de la clase, instancia un objeto de clase Rectangulo, asignándole los valores iniciales.

Muestra por pantalla el área de ese rectángulo.

Muestra por pantalla el perímetro de ese rectángulo.

Ejercicios Parte 2
Objetos simples
Los siguientes ejercicios deberán realizarse en el lenguaje C++. Cada ejercicio debe hacerse en un archivo separado.

Ejercicio 1
Crea una clase Circulo.

Define un atributo llamado radio.

Define los siguientes métodos:

Define un método constructor el cual inicialice el valor del atributo llamado radio.
calcularArea() -> Este método retorna el área del círculo.
calcularPerimetro() -> Este método retorna el perímetro del círculo.
cambiarRadio() -> Este método permite cambiar el radio del círculo.
Fuera de la clase, instancia un objeto de clase Circulo, asignándole un radio inicial.

Muestra por pantalla el área de ese círculo.

Muestra por pantalla el perímetro de ese círculo.

Ejercicio 2
Crea una clase Rectangulo.

Define los atributos llamados longitud y ancho.

Define los siguientes métodos:

Define un método constructor el cual inicialice los valores de sus atributos.
calcularArea() -> Este método retorna el área del rectángulo.
calcularPerimetro() -> Este método retorna el perímetro del rectángulo.
cambiarLongitud() -> Este método permite cambiar la longitud del rectángulo.
cambiarAncho() -> Este método permite cambiar el ancho del rectángulo.
Fuera de la clase, instancia un objeto de clase Rectangulo, asignándole los valores iniciales.

Muestra por pantalla el área de ese rectángulo.

Muestra por pantalla el perímetro de ese rectángulo.
Ejercicios parte 3
Objetos interactivos
Puedes realizarlo con lenguaje Java o C++. En ninguno de los lenguajes puedes usar vectores o listas.
Nota: Esto es un vector de string en C++:

std::vector<std::string>
Esto es una lista de string en Java:

ArrayList<String> stringList;
La siguiente actividad no reproducirá un sonido real, solo mostrará el nombre de la canción.
Realiza un simulador de reproductor de sonido. Para esto, deberás crear una clase llamada Playlist que cumpla con lo siguiente:

En cuanto a los atributos, deben al menos existir los siguientes:

Debe poseer un atributo "nombre". Este será la referencia al nombre de la lista de reproducción.
Un atributo que contendrá las canciones; se espera que sea un arreglo de strings.
Un atributo que representará el estado. Los estados pueden ser: reproduciendo, pausa y detenido.
Un atributo que indica el índice de la canción que se está reproduciendo.
En cuanto a los métodos, deben al menos existir los siguientes:

Un método que permitirá añadir una canción.
Un método que permitirá eliminar una canción.
Un método que permitirá mostrar todas las canciones.
Un método que comienza a reproducir una canción.
Un método que permitirá seleccionar una canción a reproducir.
Un método que permitirá pausar una canción.
Un método que permitirá detener la reproducción.
Un método que pasará a la siguiente canción.
Un método que permitirá retroceder a la canción anterior.
Un método que permitirá reproducir una canción aleatoria (si ya está reproduciendo una canción, al seleccionar una canción aleatoria no puede reproducir la que ya se estaba reproduciendo).
Un método que permite ver el estado de la playlist.
Un método que permite ver la canción que se está reproduciendo.
Fuera de la clase, debes instanciar una lista y luego debes iniciar un ciclo while. Al usuario se le darán alternativas para interactuar con la playlist. Debe haber una opción en el while que permite terminar el programa.

Debes destruir las instancias de objetos creadas de forma manual. Si es necesario, también debes liberar memoria antes de que el programa finalice por completo.

