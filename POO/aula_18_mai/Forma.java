package aula_18_mai;

public abstract class Forma {
    int x;
    int y;
    
    public abstract double calculaArea();
    public void imprimePosicao() {
        System.out.println("x: " + x);
        System.out.println("y: " + y);
    }
    public double getRaio() {
        return 0;
    }
    



    
}