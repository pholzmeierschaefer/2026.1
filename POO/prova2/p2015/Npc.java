package prova2.p2015;

public class Npc extends Atores{
    private String profissao;
    private String nome;
    private int qtdOuro;

    public Npc(int x, int y, int z, int vida, String profissao, String nome, int qtdOuro){
        super(x, y, z, vida);
        this.nome = nome;
        this.profissao = profissao;
        this.qtdOuro = qtdOuro;
    }

    public String getProfissao(){ 
        return profissao; 
    }
    public void setProfissao(String profissao){ 
        this.profissao = profissao; 
    }
    public String getNome(){
        return this.nome;
    }
    public void setNome(String nome){
        this.nome = nome;
    }
    public int getQtdOuro(){
        return this.qtdOuro;
    }
    public void setOuro(int qtdOuro){
        this.qtdOuro = qtdOuro;
    }
    
}
