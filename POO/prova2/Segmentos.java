package prova2;

public class Segmentos {
    private Ponto pontoA;
    private Ponto pontoB;

    public Segmentos(Ponto PontoA, Ponto PontoB){
        this.pontoA = PontoA;
        this.pontoB = PontoB;
    }

    public Ponto getPA(){
        return this.pontoA;
    }
    public Ponto getPB(){
        return this.pontoB;
    }

    public void setPA(Ponto pontoA){
        this.pontoA = pontoA;
    }
    public void setPB(Ponto pontoB){
        this.pontoB = pontoB;
    }
}
