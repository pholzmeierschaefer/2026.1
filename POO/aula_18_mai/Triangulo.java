package aula_18_mai;

public class Triangulo extends Forma {
    double base;
    double altura;

    @Override
    public double calculaArea() {
        return (base * altura) / 2;
    }
    
}

    
