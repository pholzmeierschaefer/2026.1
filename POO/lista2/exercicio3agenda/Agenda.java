package lista2.exercicio3agenda;

public class Agenda {
    Pessoa[] pessoas = new Pessoa[15];
    int numPessoas = 0;


    void cadastrarPessoa(Pessoa p){
        if (numPessoas < 15){
            for(int i = 0; i < 15; i++){
                if(pessoas[i] == null){
                    pessoas[i] = p;
                    numPessoas ++;
                }
            }
        }
    }

    void listarPessoas(){
        for(int i = 0; i < numPessoas; i ++){
            System.out.println("nome: " + pessoas[i].nome);
            System.out.println("nascimento: " + pessoas[i].nascimento);
            System.out.println("contato: " + pessoas[i].contatos);
        }
    }

    void buscarNome(){

    }


}
