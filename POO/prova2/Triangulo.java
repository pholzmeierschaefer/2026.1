package prova2;

public class Triangulo extends Forma implements Transformavel {
    private int base;
    private int altura;
    


    public Triangulo(int x, int y, int base, int altura){
        super(x, y);
        this.altura = altura;
        this.base = base;
    }



    public void setAltura(int altura){
        this.altura = altura;
    }

    public void setBase(int base){
        this.base = base;
    }

    public int getAltura(){
        return this.altura;
    }

    public int getBase(){
        return this.base;
    }

    


     @Override
     public void transformar(double escala) {
        this.altura = (int) (this.altura * escala);
        this.base = (int) (this.base * escala);
    }
    
}
