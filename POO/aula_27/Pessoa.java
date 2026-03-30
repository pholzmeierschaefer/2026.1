package aula_27;

public class Pessoa {
    int idade;
    String nome;
    static int numObjetosPessoas = 0;

    public Pessoa() {
        //da de chamar o construtor de baixo passando 0 para a idade pois é o padrao
        //this.nome = new String("Alguém");
        this(0); //chama o construtor que é compativel com o 0
        
    }

    public Pessoa(int i) {
        this.idade = i;
        this.nome = new String("Alguém");
        numObjetosPessoas ++;
    }

    void imprime(){
        System.out.println("PESSOA: ");
        System.out.println("Nome: " + nome);
        System.out.println("Idade: " + idade);
        System.out.println("");
    }

    static void imprimeNumObjPessoa(){
        System.out.println("num de objetos pessoas: " + Pessoa.numObjetosPessoas);
    }

}
