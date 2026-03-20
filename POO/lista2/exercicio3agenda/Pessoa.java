package lista2.exercicio3agenda;

public class Pessoa {
    String nome;
    Data nascimento;
    Contato[] contatos = new Contato[4];
    int numContatos = 0;


    void cadastrarContatos(Contato c ){
        if(numContatos < 4){
            for(int i = 0; i < 4; i++){
                if(contatos[i] == null){
                    contatos[i] = c;
                    numContatos ++;     
                }
            }
        }
        else{
            System.out.println("a lista de contatos esta cheia");
        }
    }


    void listarContatos(){
        for(int i = 0; i < numContatos; i ++){
                System.out.println("numero" + contatos[i].numero);
                System.out.println("eh whatsapp" + contatos[i].wpp);
                System.out.println("eh telegram" + contatos[i].telegram);
        }
    }

}


