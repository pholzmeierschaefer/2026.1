package prova2.p2014;

public class Trapezio extends Forma implements Transformavel, Rotacionavel {

    private int Bmaior;
    private int Bmenor;
    private int Altura;
    




    public Trapezio(int x, int y, int Bmaior, int Bmenor, int Altura){
        super(x, y);
        this.Altura = Altura;
        this.Bmaior = Bmaior;
        this.Bmenor = Bmenor;
    }

    public void setBmaior(int maior){
        this.Bmaior = maior;
    }
    public void setBmenor(int menor){
        this.Bmenor = menor;
    }
    public void setAltura(int altura){
        this.Altura = altura;
    }


    public int getBmaior(){
        return this.Bmaior;
    }
    public int getBmenor(){
        return this.Bmenor;
    }
    public int getAltura(){
        return this.Altura;
    }


    @Override
     public void transformar(double escala) {
        this.Bmaior = (int) (this.Bmaior * escala);
        this.Bmenor = (int) (this.Bmenor * escala);
        this.Altura = (int) (this.Altura * escala);
    }

    @Override
    public void rotacionar(double angulo) {
        // imp rotação
    }
    
}
