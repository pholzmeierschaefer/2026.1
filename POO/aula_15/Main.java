import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Estudante estudante = new Estudante();
        Funcionario funcionario = new Funcionario();

        Scanner sc = new Scanner(System.in);
        System.out.print("Digite o nome do aluno: ");
        String nome_aluno = sc.nextLine();

        System.out.print("Digite o curso: ");
        String curso = sc.nextLine();

        System.out.print("Digite o nome do funcionario: ");
        String nome_func = sc.nextLine();

        System.out.print("Digite o cargo: ");
        String cargo = sc.nextLine();

        sc.close();


        estudante.setNome(nome_aluno);
        estudante.setCurso(curso);
        funcionario.setNome(nome_func);
        funcionario.setCargo(cargo);


        
        estudante.getNome();
        estudante.getDesc();
        funcionario.getNome();
        funcionario.getDesc();


    }
}
