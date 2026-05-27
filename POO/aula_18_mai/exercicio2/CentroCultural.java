package aula_18_mai.exercicio2;

public class CentroCultural {

    private Evento[] eventos;
    private int quantidadeAtual;

    
    public CentroCultural(int capacidadeMaxima) {
        this.eventos = new Evento[capacidadeMaxima];
        this.quantidadeAtual = 0;
    }

    
    public void cadastrarEvento(Evento evento) {
        if (quantidadeAtual < eventos.length) {
            eventos[quantidadeAtual] = evento;
            quantidadeAtual++;
            System.out.println("evento '" + evento.getNome() + "' cadastrado");
        } else {
            System.out.println("nao tem espaco para novos eventos");
        }
    }

    
    public void listarEventos() {
        System.out.println("\n-eventos-");
        for (int i = 0; i < quantidadeAtual; i++) {
            Evento e = eventos[i];

            
            if (e instanceof PecaTeatral) {
                System.out.print("peca teatral - ");
            } 
            
            else if (e instanceof ShowMusical) {
                System.out.print("show musical - ");
            }

           
            System.out.println("nome: " + e.getNome() +  "\n vagas: " + e.getVagas() + "\n preço: R$ " + e.calcularPreco());
        }
    }

   
    
    public void comprarIngresso(String nomeDoEvento) {
        for (int i = 0; i < quantidadeAtual; i++) {
            
            if (eventos[i].getNome().equalsIgnoreCase(nomeDoEvento)) {
                
             
                eventos[i].comprarIngresso();
                return; // Encerra a busca, pois já achou o evento
            }
        }
        System.out.println("Evento '" + nomeDoEvento + "' não encontrado.");
    }
  
    
}
