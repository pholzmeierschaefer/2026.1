package prova2.p2015;

public abstract class Atores extends Entidade {
    public Atores(int x, int y, int z, int vida){
        super(x, y, z, vida);
    }

    @Override
    public double calculaVolume(){
        //calculo volume ator
        //genérico
        return 1.80 * 0.50;
    }
}
