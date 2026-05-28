package prova2.p2015;

public class Curanderia extends Construcoes {

    public Curanderia(int x, int y, int z, int vida, int largura, int profundidade, int altura, int tempoVivo){
        super(x, y, z, vida, largura, profundidade, altura, tempoVivo);
    }

    public void repara(Entidade[] entidades){
        for(int i = 0; i < entidades.length; i++){
            if(entidades[i] instanceof Atores){
                Atores a = (Atores) entidades[i]; //downcasting
                a.setVida(a.getVida()+5);
            }

            if(entidades[i] instanceof Construcoes){
                Construcoes c = (Construcoes) entidades[i]; //downcasting
                c.setTempoVivo(c.getTempoVivo()+5);
            }
            entidades[i].setX(0);
            entidades[i].setY(0);
            entidades[i].setZ(0);
        }
    }
 
    public int quantoPodemPagar(Entidade[] entidades){

        int totalOuro = 0;

        for(int i = 0; i < entidades.length; i++){
            if(entidades[i] instanceof Personagem){
                Personagem p = (Personagem) entidades[i];
                Item[] itens = p.getItens();
                if(itens != null){
                    for(int j = 0; j < itens.length; j++){
                        if(itens[j] != null){
                            totalOuro += itens[j].getCusto();
                        }
                    }
                }
            }
        }
    return totalOuro;

    }
    
}
