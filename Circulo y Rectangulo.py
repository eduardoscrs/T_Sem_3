class Circulo:
    def __init__(self, radio):
        self.radio = radio

    def area(self):
        return 3.14 * (self.radio ** 2)

    def perimetro(self):
        return 2 * 3.14 * self.radio
    
    def cambiar_radio(self, radio):
        self.radio = radio

    def imprimir(self):
        print("Radio: ", self.radio)
        print("Area: ", self.area())
        print("Perimetro: ", self.perimetro())


perimeto = Circulo(5)

imprimir = perimeto.imprimir()  


class Rectangulo:
    def __init__(self, base, altura):
        self.base = base
        self.altura = altura
    
    def area(self):
        return self.base * self.altura
    
    def perimetro(self):
        return 2 * self.base + 2 * self.altura
    
    def cambiar_base(self, base):
        self.base = base
        
    def cambiar_altura(self, altura):
        self.altura = altura    
    
    def imprimir(self):
        if self.base == self.altura:
            print("Es un cuadrado")
        else:
            print("Area: ", self.area())
            print("Perimetro: ", self.perimetro())    
        


datos = Rectangulo(5, 6)
imprimir = datos.imprimir()