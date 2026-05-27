package prova2;

public class Circulo extends Forma implements Transformavel{

    private int raio;
   

    public Circulo(int x, int y, int raio){
        super(x, y);
        this.raio = raio;
    }

    public int getRaio(){
        return this.raio;
    }


    public void setRaio(int raio){
        this.raio = raio;
    }

   

    
    
    @Override
     public void transformar(double escala) {
        this.raio = (int) (this.raio * escala);
    }
}
