package lista2.exercicio3agenda;

public class Agenda {
    Pessoa[] pessoas = new Pessoa[15];
    int numPessoas = 0;


    void cadastrarPessoa(Pessoa p){
        if (numPessoas < 15){
            
                    pessoas[numPessoas] = p;
                    numPessoas ++;
            
        }
    }

    void listarPessoas(){
        for(int i = 0; i < numPessoas; i ++){
            System.out.println("nome: " + pessoas[i].nome);
            System.out.println("nascimento: " + pessoas[i].nascimento.dia + "/" + pessoas[i].nascimento.mes + "/" + pessoas[i].nascimento.ano);
            pessoas[i].listarContatos();;
        }
    }

    void buscarNome(String nome1){
        boolean achou = false;
        for(int i = 0; i < numPessoas; i++){
            if(nome1.equals(pessoas[i].nome)){
                System.out.println("nome: " + pessoas[i].nome);
                System.out.println("nascimento: " + pessoas[i].nascimento.dia + "/" + pessoas[i].nascimento.mes + "/" + pessoas[i].nascimento.ano);
                pessoas[i].listarContatos();
                achou = true;
                break;
            }
            if(!achou){
                System.out.println("o contato nao foi encontrado");
            }
        }
    }
}
