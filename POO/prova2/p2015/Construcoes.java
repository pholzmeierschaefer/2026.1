package prova2.p2015;

public class Construcoes extends Entidade {

    private int tempoVivo;
    private int largura;
    private int altura;
    private int profundidade;

    public Construcoes(int x, int y, int z, int vida, int largura, int profundidade, int altura, int tempoVivo){
        super(x, y, z, vida);
        this.largura = largura;
        this.profundidade = profundidade;
        this.altura = altura;
        this.tempoVivo = tempoVivo;
    }

    @Override
    public double calculaVolume(){
        return this.altura * this.largura * this.profundidade;

    }

    public int getLargura(){ 
        return largura;
    }
    public void setLargura(int largura){ 
        this.largura = largura; 
    }
    public int getAltura(){ 
        return altura; 
    }
    public void setAltura(int altura){ 
        this.altura = altura; 
    }
    public int getProfundidade(){
        return profundidade; 
    }
    public void setProfundidade(int profundidade){ 
        this.profundidade = profundidade; 
    }
    public int getTempoVivo(){ 
        return this.tempoVivo; 

    }
    public void setTempoVivo(int tempoVivo){ 
        this.tempoVivo = tempoVivo; 
    }



    
}
