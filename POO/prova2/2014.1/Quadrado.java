package prova2;

public class Quadrado extends Forma implements Rotacionavel, Depuravel{

    private int lado;
    

    public Quadrado(int x, int y, int lado){
        super(x, y);
        this.lado = lado;
    }

    public int getLado(){
        return this.lado;
    }

    public void setLado(int lado){
        this.lado = lado;
    }



    @Override
    public Segmentos[] getLados(){
        Segmentos[] ladosQuadrado = new Segmentos[4]; //quadrado tem 4 segmentos

        Ponto p1 = new Ponto(getX(), getY());               //ponto esquerda superior
        Ponto p2 = new Ponto(getX() + lado, getY());        //ponto superior direta
        Ponto p3 = new Ponto(getX()+lado,getY()+lado);      //ponto inferior direita
        Ponto p4 = new Ponto(getX(),getY()+lado);           //ponto inferior esquerdo

        ladosQuadrado[0] = new Segmentos(p1, p2);           //segmento cima
        ladosQuadrado[1] = new Segmentos(p2, p3);           //segmento direita
        ladosQuadrado[2] = new Segmentos(p3, p4);           //segmento baixo
        ladosQuadrado[3] = new Segmentos(p4, p1);           //segmento esquerda

        return ladosQuadrado;               //retorna segmentos
        

    }
    


    @Override
    public void rotacionar(double angulo) {
        // imp rotação
    }
}
