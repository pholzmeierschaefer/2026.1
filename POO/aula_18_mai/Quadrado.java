package aula_18_mai;

public class Quadrado extends Forma {
    double lado; 

    @Override
    public double calculaArea() {
        return lado * lado; 
    }
}
