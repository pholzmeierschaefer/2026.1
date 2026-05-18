package aula_18_mai;

public class Retangulo extends Forma {
    double largura;
    double altura;

    @Override
    public double calculaArea() {
        return largura * altura; 
    }
    
}