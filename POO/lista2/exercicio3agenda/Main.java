package lista2.exercicio3agenda;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Agenda agenda = new Agenda();
        int opcao;

        // O do-while mantém o menu rodando até a pessoa digitar 0 para sair
        do {
            System.out.println("\n=== HUB DA AGENDA ===");
            System.out.println("1 - Cadastrar Pessoas");
            System.out.println("2 - Listar Pessoas");
            System.out.println("3 - Buscar por Nome");
            System.out.println("0 - Sair do Programa");
            System.out.print("Escolha uma opção: ");
            
            opcao = scanner.nextInt();
            scanner.nextLine(); // Limpa o buffer do teclado após ler o número

            switch (opcao) {
                case 1:
                    System.out.println("\n--- MODO DE CADASTRO ---");
                    System.out.println("Dica: Digite '0' no nome a qualquer momento para voltar ao menu principal.");
                    
                    // Continua permitindo até 15 cadastros
                    for (int i = 0; i < 15; i++) {
                        System.out.println("\nCadastro " + (i + 1) + " de 15:");
                        
                        System.out.print("Digite o nome (ou 0 para parar): ");
                        String nomeDigitado = scanner.nextLine();

                        // O BREAK ENTRA AQUI! Se digitar 0, ele quebra o laço FOR e volta pro Menu
                        if (nomeDigitado.equals("0")) {
                            System.out.println("Voltando ao menu principal...");
                            break; 
                        }

                        Pessoa p = new Pessoa();
                        p.nome = nomeDigitado;

                        // Cadastrando a Data
                        Data d = new Data();
                        System.out.print("Dia de nascimento: ");
                        d.dia = scanner.nextInt();
                        System.out.print("Mês de nascimento: ");
                        d.mes = scanner.nextInt();
                        System.out.print("Ano de nascimento: ");
                        d.ano = scanner.nextInt();
                        scanner.nextLine(); // Limpa o buffer

                        p.nascimento = d;

                        // Cadastrando o Contato
                        Contato c = new Contato();
                        System.out.print("Digite o número de telefone: ");
                        c.numero = scanner.nextLine();

                        System.out.print("Tem WhatsApp? (true/false): ");
                        c.wpp = scanner.nextBoolean();

                        System.out.print("Tem Telegram? (true/false): ");
                        c.telegram = scanner.nextBoolean();
                        scanner.nextLine(); // Limpa o buffer

                        // Salvando tudo
                        p.cadastrarContatos(c);
                        agenda.cadastrarPessoa(p);
                        
                        System.out.println("Pessoa '" + p.nome + "' cadastrada com sucesso!");
                    }
                    break;

                case 2:
                    System.out.println("\n=== LISTANDO CONTATOS ===");
                    agenda.listarPessoas();
                    break;

                case 3:
                    System.out.println("\n=== BUSCAR CONTATO ===");
                    System.out.print("Digite o nome exato para buscar: ");
                    String nomeBusca = scanner.nextLine();
                    agenda.buscarNome(nomeBusca);
                    break;

                case 0:
                    System.out.println("\nEncerrando o sistema. Até logo!");
                    break;

                default:
                    System.out.println("\nOpção inválida! Tente novamente.");
            }

        } while (opcao != 0); // Só sai do loop (e do programa) se a opção for 0

        scanner.close();
    }
}