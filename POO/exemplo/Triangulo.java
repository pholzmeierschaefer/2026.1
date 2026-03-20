package exemplo;

public class Triangulo {
    double base;
    double altura;


    double calculaArea(){
        double area = (this.base * this.altura) / 2;
        return area;
    }

    boolean temDimIguais(Triangulo t){
        return(base == t.base && altura == t.altura);
    }

    void somaTriangulo(Triangulo t){
        base += t.base;
        altura += t.altura;
    }

    void somaTriangulo2(Triangulo t){
        t.base += base;
        t.altura += altura;
    }

}



