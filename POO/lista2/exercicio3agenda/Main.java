package lista2.exercicio3agenda;

import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        Agenda agenda = new Agenda();
        int opcao;

        

        do{

            

                System.out.println("------------------------------------\nESCOLHA UMA OPCAO\n------------------------------------\n1 - Cadastrar Pessoas\n2 - Listar Pessoas\n3 - Buscar Por Nome\n0 - Sair Do Programa\n------------------------------------");
                opcao = sc.nextInt();
                sc.nextLine();

                switch (opcao){
                case 1:
                    System.out.println("Voce selecionou CADASTRAR PESSOAS");
                    for(int i = 0; i < 15; i++){
                        
                        System.out.print("Digite o nome (0 para parar): ");
                        String nomeDigitado = sc.nextLine();

                        
                        if (nomeDigitado.equals("0")) {
                            System.out.println("Finalizando");
                            break; 
                        }

                        Pessoa p = new Pessoa();
                        p.nome = nomeDigitado;

                        Data d = new Data();
                        System.out.print("Dia de nascimento: ");
                        d.dia = sc.nextInt();
                        System.out.print("Mês de nascimento: ");
                        d.mes = sc.nextInt();
                        System.out.print("Ano de nascimento: ");
                        d.ano = sc.nextInt();
                        sc.nextLine(); //ignora enter
                        
                        p.nascimento = d;

                   
                        Contato c = new Contato();
                        System.out.print("Digite o numero de telefone: ");
                        c.numero = sc.nextLine();
                        System.out.print("Tem WhatsApp? (true(sim)/false(nao)): ");
                        c.wpp = sc.nextBoolean();
                        System.out.print("Tem Telegram? (true(sim)/false(nao)): ");
                        c.telegram = sc.nextBoolean();
                        sc.nextLine();
                   
                        p.cadastrarContatos(c);
                        agenda.cadastrarPessoa(p);
                        
                        System.out.println(p.nome + " cadastrada");
                    }
                    break;

                    case 2:
                        System.out.println("Voce selecionou LISTAR CONTATOS");
                        agenda.listarPessoas();
                        break;

                    case 3:
                        System.out.println("Voce selecionou BUSCAR POR NOME");
                        System.out.print("Digite o nome exato para buscar: ");
                        String nomeBusca = sc.nextLine();
                        agenda.buscarNome(nomeBusca);
                        break;

                    case 0:
                        System.out.println("Voce selecionou SAIR DO PROGRAMA");
                        System.out.println("..........SAINDO..........");
                        break;

                    default:
                        System.out.println("OPCAO INVALIDA");

                    }
                } while (opcao!=0);
                sc.close();
                
            }
            

}













    
