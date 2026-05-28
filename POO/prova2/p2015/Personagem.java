package prova2.p2015;

public class Personagem extends Atores {
    private Item[] itens;

    public Personagem(int x, int y, int z, int vida, Item[] itens){
        super(x, y, z, vida);
        this.itens = itens;
    }

    public Item[] getItens(){
        return this.itens;
    }
    public void setItens(Item [] itens){
        this.itens = itens;
    }
}
