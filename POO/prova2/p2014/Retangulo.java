package prova2.p2014;

public class Retangulo extends Forma implements Rotacionavel {
    private int altura;
    private int largura;
   



    public Retangulo(int x, int y, int altura, int largura){
        super(x, y);

        this.largura = largura;
        this.altura = altura;
    }
    

    public int getAltura(){
        return this.altura;
    }

    public int getLargura(){
        return this.largura;
    }

    public void setAltura(int altura){
        this.altura = altura;
    }
    public void setLargura(int largura){
        this.largura = largura;
    }
  

    @Override
    public void rotacionar(double angulo) {
        // imp rotação
    }
    
}
