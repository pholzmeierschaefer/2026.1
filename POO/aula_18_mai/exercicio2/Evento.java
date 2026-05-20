package aula_18_mai.exercicio2;

public abstract class Evento {
    private String nome;
    private int vagasDispo;
    private float precoBase;

    public void setNome(String nome) {
        this.nome = nome;
    }
    public void setVagas(int vagasDispo){
        this.vagasDispo = vagasDispo;
    }
    public void setPrecoBase(float precoBase){
        this.precoBase = precoBase;
    }


    public String getNome() {
        return this.nome;
    }
    public int getVagas(){
        return this.vagasDispo;
    }
    public float getPrecoBase(){
        return this.precoBase;
    }


    public abstract float calcularPreco();


    public void comprarIngresso(){
        if(vagasDispo > 0){
            vagasDispo --;
            System.out.println("ingresso comprado");
         
        }
        else{
            System.out.println("nao foi possivel realizar a compra\ningressos esgotados");
           
        }
    }


    
}
