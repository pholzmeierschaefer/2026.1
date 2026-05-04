package aula_4.exercicio;

public abstract class Participantes {
    private String nome;

    public Participantes(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return nome;
    }

    public abstract void getDesc();

    
}
