package aula_30;

public class Main {
    public static void main(String[] args){
        Funcionario f1 = new Funcionario("Jose", 10000, "30/03/2026");

        f1.imprime();
        System.out.println();


       /* 
        f1.nome = "";
        f1.salario = 10;
        f1.dataContratacao = "10/12/2090";   //com o private antes da variavel na classe funcionario, nao se torna mais acessivel as variaveis   
        f1.imprime();
        */

        System.out.println("Nome(priv): " + f1.getNome());
        System.out.println("Salario(priv): " + f1.getSalario());
        System.out.println("Data contratacao(priv): " + f1.getDataContratacao());
        System.out.println();

        f1.setNome("");
        System.out.println("Nome(priv e alterado)(nesse caso n alterou para vazio porque agora temos tratamento): " + f1.getNome()); //agora tem a lógica que nao permite colocar nome vazio, entao o nome continua o anterior sem mudanças
        System.out.println();

        f1.setSalario(-10);
        System.out.println("Salario(priv)(nao alterou pois eh invalido se for <= 0): " + f1.getSalario());
        System.out.println();
        
        f1.imprime();
        System.out.println();

        f1.setDataContratacao("23/03/2026");
        System.out.println("Data de Contratacao: " + f1.getDataContratacao());
        System.out.println();

        f1.imprime();
        System.out.println();

    }
}
